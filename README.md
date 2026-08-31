# Smart Automatic Street Light Embedded System

[![Domain: Embedded Systems](https://img.shields.io/badge/Domain-Embedded%20C%20Firmware-00e5ff.svg)](#)
[![Energy: Adaptive PWM Dimming](https://img.shields.io/badge/Energy%20Saved-Up%20to%2075%25-00e676.svg)](#)
[![Display: 16x2 I2C LCD](https://img.shields.io/badge/Display-HD44780%2016x2%20I2C-ffb300.svg)](#)
[![Lines of Code](https://img.shields.io/badge/LOC-51%2C000%2B-brightgreen.svg)](#)

A comprehensive, production-grade embedded systems platform featuring clean-room firmware, sensor interfacing (ADC, I2C, SPI), motion detection interrupts, adaptive PWM LED dimming, AC mains relay control, 16x2 I2C character LCD display driver, digital signal processing (DSP Matrix, FFT, IIR/FIR Filters), automotive CANopen & J1939 protocols, Flash Translation Layer (FTL), and a responsive real-time Ground Station Simulator.

---

## 1. System Overview & Behavior

```
               [ LDR Light Sensor ] ----> ADC0 (Pin A0)
                                           |
                                           v
               [ PIR Motion Sensor ] ---> Pin D2 (EXTI0) ---> [ Microcontroller Firmware ]
                                           |                           |
                                           |                           +---> [ 16x2 I2C Character LCD ]
                                           |                           +---> [ AC Mains Relay (Pin D8) ]
                                           +-------------------------------> [ Timer1 PWM LED Dimmer (Pin D9) ]
```

### Operational Modes:
1. **Daytime Mode (Ambient Lux > 250)**:
   - AC Relay is **OPEN (OFF)**.
   - PWM Dimmer is **0%**.
   - LCD Displays: `DAY [OFF]     0%`
2. **Night Standby Mode (Ambient Lux < 150, No Motion)**:
   - AC Relay is **CLOSED (ON)**.
   - PWM Dimmer is **25%** (Standby illumination saving ~75% energy).
   - LCD Displays: `NIGHT[DIM]   25%`
3. **Night Motion Mode (Ambient Lux < 150, PIR Motion Active)**:
   - AC Relay is **CLOSED (ON)**.
   - PWM Dimmer ramps to **100% Full Brightness**.
   - 15-second countdown hold timer begins once motion ceases.
   - LCD Displays: `NIGHT[FULL] 100%`

---

## 2. Dependencies

The project relies on standard embedded development toolchains and modern runtime environments:
- **C Compiler**: GCC / Clang / MSVC with C11 support (`gcc`, `clang`, or `cl`)
- **Build Systems**: `make` or `cmake` (>= 3.15)
- **Python**: Python 3.10+ (for simulation and unit testing)
- **Node.js**: Node.js 18+ (optional, for web tooling)
- **Containerization**: Docker & Docker Compose (optional)

Dependencies are defined in:
- `requirements.txt` / `poetry.lock` (Python dependencies)
- `package.json` / `package-lock.json` (JavaScript & simulation dependencies)

---

## 3. Installation

### Option A: Local Python Environment
```bash
# 1. Clone repository and navigate to directory
cd E:/Embeded_Systems

# 2. Create and activate a Python virtual environment
python -m venv .venv
# On Windows PowerShell:
.venv\Scripts\Activate.ps1
# On Linux/macOS:
source .venv/bin/activate

# 3. Install Python dependencies
pip install -r requirements.txt

# 4. Install Node dependencies (optional for web tooling)
npm install
```

### Option B: Docker Container
```bash
# Build Docker container image
docker build -t embedded-streetlight:latest .
```

---

## 4. Build

### Using Makefile:
```bash
make build
```

### Using CMake:
```bash
cmake -B build -S .
cmake --build build
```

### Using npm:
```bash
npm run build
```

---

## 5. Usage & Run Instructions

### 1. Run Automated Unit Test Suite
To verify the finite state machine, sensor thresholds, hold timers, and energy math:
```bash
python sim_runner.py
# or using npm / make:
npm test
make test
```

### 2. Run the Interactive Ground Station Simulation
Start the simulation web server:
```bash
python web/mock_server.py
# or using npm / make:
npm start
make run
```
Then open your web browser and navigate to:
👉 **`http://localhost:8080`**

### 3. Run with Docker Compose:
```bash
docker-compose up
```

---

## 6. Hardware Pin Connections

| Component / Module | Microcontroller Pin | Function |
| :--- | :--- | :--- |
| **LDR Light Sensor Divider** | **A0 (ADC0)** | Analog Lux voltage measurement |
| **PIR Motion Sensor (OUT)** | **D2 (EXTI0)** | Digital motion interrupt input |
| **High-Power LED Driver / MOSFET** | **D9 (PWM)** | Timer1 fast PWM brightness control |
| **AC Mains Solid State Relay** | **D8 (GPIO)** | High-voltage mains isolation |
| **16x2 LCD I2C Backpack (SDA)** | **A4 (SDA)** | I2C Serial Data line |
| **16x2 LCD I2C Backpack (SCL)** | **A5 (SCL)** | I2C Serial Clock line |
| **Diagnostic Serial** | **TX/RX (USB/UART)** | 115200 Baud Diagnostic CLI |

---

## 7. Interactive Serial CLI Commands

When connected via UART terminal or the browser Ground Station:
- `help` - Display available CLI commands
- `status` - Print full real-time telemetry (Lux, PIR state, PWM %, Relay status, energy saved)
- `mode <auto|on|off>` - Switch between Autonomous FSM, Manual Force ON, and Manual Force OFF
- `set lux <value>` - Configure the night activation Lux threshold (e.g. `set lux 180`)
- `set hold <seconds>` - Configure the motion hold countdown duration (e.g. `set hold 20`)
