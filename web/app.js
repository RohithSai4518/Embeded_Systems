/**
 * @file app.js
 * @brief Smart Automatic Street Light System - Ground Control Simulator & State Machine
 */

let system = {
    lux: 450.0,
    motion: false,
    continuousMotion: false,
    motionTimer: 0.0,
    pwm: 0,
    relay: false,
    state: 'DAY_IDLE',
    mode: 'auto',
    energySavedKwh: 0.12,
    totalNightHours: 4.5,
    holdDuration: 15
};

/* Handle Ambient Sunlight Slider Change */
function onLuxSliderChange(val) {
    system.lux = parseFloat(val);
    let desc = "Daylight";
    if (system.lux < 50) desc = "Midnight / Dark";
    else if (system.lux < 150) desc = "Dusk / Night";
    else if (system.lux < 300) desc = "Overcast / Dawn";

    document.getElementById('luxVal').textContent = `${Math.round(system.lux)} Lux (${desc})`;
    document.getElementById('gauge-lux').innerHTML = `${Math.round(system.lux)} <span class="unit">Lux</span>`;
    document.getElementById('bar-lux').style.width = `${Math.min(100, (system.lux / 800) * 100)}%`;
    
    const volts = ((system.lux / (system.lux + 100)) * 5.0).toFixed(2);
    document.getElementById('gauge-ldr-volts').textContent = `${volts} V on Pin A0`;
}

/* Trigger 15s Motion Pulse */
function triggerMotionPulse() {
    system.motion = true;
    system.motionTimer = system.holdDuration;
    
    // Animate Pedestrian
    const ped = document.getElementById('pedestrian');
    ped.style.opacity = '1.0';
    ped.style.transform = 'translateX(60px)';
    
    appendTerm('[EVENT] PIR Motion Pulse Detected (Hold: 15s)');

    setTimeout(() => {
        if (!system.continuousMotion) {
            system.motion = false;
        }
    }, 2000);
}

/* Toggle Continuous Motion */
function toggleContinuousMotion() {
    system.continuousMotion = !system.continuousMotion;
    system.motion = system.continuousMotion;
    
    const btn = document.getElementById('btnToggleContinuous');
    if (system.continuousMotion) {
        btn.style.background = 'rgba(0, 230, 118, 0.2)';
        btn.style.borderColor = 'var(--accent-green)';
        btn.textContent = '🚶 Continuous Motion [ACTIVE]';
        system.motionTimer = system.holdDuration;
    } else {
        btn.style.background = 'var(--bg-surface)';
        btn.style.borderColor = 'var(--border-color)';
        btn.textContent = '🚶 Toggle Continuous Motion';
    }
}

/* Set Operating Mode */
function setSystemMode(mode) {
    system.mode = mode;
    document.getElementById('btnModeAuto').className = 'mode-btn' + (mode === 'auto' ? ' active' : '');
    document.getElementById('btnModeOn').className = 'mode-btn' + (mode === 'on' ? ' active' : '');
    document.getElementById('btnModeOff').className = 'mode-btn' + (mode === 'off' ? ' active' : '');

    document.getElementById('pill-mode').innerHTML = `<span class="dot"></span> MODE: ${mode.toUpperCase()}`;
    appendTerm(`[MODE] System mode changed to: ${mode.toUpperCase()}`);
}

/* Real-Time Embedded State Machine Simulation Loop */
function stepSimulation() {
    const dt = 0.05; // 50ms timestep

    // 1. Motion Countdown Timer
    if (system.continuousMotion) {
        system.motionTimer = system.holdDuration;
    } else if (system.motionTimer > 0) {
        system.motionTimer -= dt;
        if (system.motionTimer <= 0) {
            system.motionTimer = 0;
            system.motion = false;
            const ped = document.getElementById('pedestrian');
            ped.style.opacity = '0.3';
            ped.style.transform = 'translateX(0px)';
        }
    }

    // 2. Finite State Machine (FSM)
    let targetPwm = 0;
    let targetRelay = false;

    if (system.mode === 'on') {
        system.state = 'MANUAL_ON';
        targetPwm = 100;
        targetRelay = true;
    } else if (system.mode === 'off') {
        system.state = 'MANUAL_OFF';
        targetPwm = 0;
        targetRelay = false;
    } else {
        // AUTO Mode
        if (system.lux > 250) {
            // Day Time
            system.state = 'DAY_IDLE';
            targetPwm = 0;
            targetRelay = false;
        } else {
            // Night Time
            if (system.motion || system.motionTimer > 0) {
                system.state = 'NIGHT_ACTIVE';
                targetPwm = 100;
                targetRelay = true;
            } else {
                system.state = 'NIGHT_STANDBY';
                targetPwm = 25; // 25% Dimmed
                targetRelay = true;
            }
        }
    }

    // Slew Rate PWM Ramping (Smooth fade)
    if (system.pwm < targetPwm) {
        system.pwm = Math.min(targetPwm, system.pwm + 5);
    } else if (system.pwm > targetPwm) {
        system.pwm = Math.max(targetPwm, system.pwm - 5);
    }
    system.relay = targetRelay;

    // 3. Update Visual Scene & Sky
    updateVisualScene();

    // 4. Update Gauges & LCD
    updateMetersAndLCD();

    setTimeout(stepSimulation, 50);
}

/* Update Scene Lighting and Lamp */
function updateVisualScene() {
    const scene = document.getElementById('streetScene');
    const celestial = document.getElementById('celestialBody');
    const bulb = document.getElementById('lampBulb');
    const cone = document.getElementById('lightCone');

    // Sky Darkness based on Lux
    const darkness = 1.0 - Math.min(1.0, system.lux / 500.0);
    const skyR = Math.round(135 - (120 * darkness));
    const skyG = Math.round(206 - (190 * darkness));
    const skyB = Math.round(235 - (200 * darkness));
    scene.style.background = `rgb(${skyR}, ${skyG}, ${skyB})`;

    celestial.textContent = system.lux > 200 ? '☀️' : '🌙';

    // Lamp Bulb Glow
    if (system.pwm > 0) {
        const glowOpacity = system.pwm / 100.0;
        bulb.style.background = '#ffeb3b';
        bulb.style.boxShadow = `0 0 ${system.pwm * 0.3}px #ffeb3b`;
        cone.style.background = `radial-gradient(ellipse at top, rgba(255, 235, 59, ${glowOpacity * 0.75}), transparent 70%)`;
    } else {
        bulb.style.background = '#444';
        bulb.style.boxShadow = 'none';
        cone.style.background = 'transparent';
    }
}

/* Update Metrics, Gauges, and 16x2 LCD */
function updateMetersAndLCD() {
    // Pills
    const fsmPill = document.getElementById('pill-fsm');
    fsmPill.innerHTML = `<span class="dot"></span> FSM: ${system.state}`;
    fsmPill.className = 'pill ' + (system.state.includes('DAY') ? 'pill-green' : (system.state.includes('STANDBY') ? 'pill-blue' : 'pill-amber'));

    const relayPill = document.getElementById('pill-relay');
    relayPill.innerHTML = `<span class="dot"></span> RELAY: ${system.relay ? 'CLOSED (ON)' : 'OPEN (OFF)'}`;
    relayPill.className = 'pill ' + (system.relay ? 'pill-green' : 'pill-amber');

    // Gauges
    document.getElementById('gauge-pwm').innerHTML = `${system.pwm} <span class="unit">%</span>`;
    document.getElementById('bar-pwm').style.width = `${system.pwm}%`;
    document.getElementById('gauge-pwm-sub').textContent = system.pwm === 0 ? "0V / 0W (Standby)" : `${((system.pwm / 100) * 12).toFixed(1)}V / ${((system.pwm / 100) * 45).toFixed(1)}W`;

    document.getElementById('gauge-timer').innerHTML = `${Math.ceil(system.motionTimer)} <span class="unit">sec</span>`;
    document.getElementById('bar-timer').style.width = `${(system.motionTimer / system.holdDuration) * 100}%`;
    document.getElementById('gauge-timer-sub').textContent = system.motionTimer > 0 ? `Active Hold (${Math.ceil(system.motionTimer)}s)` : "Hold Timer Idle";

    document.getElementById('motionStatusBadge').textContent = (system.motion || system.motionTimer > 0) ? "Active Motion" : "No Motion";

    // 16x2 LCD Screen Text Buffer
    const line1Tag = system.state === 'DAY_IDLE' ? 'DAY [OFF] ' : (system.state === 'NIGHT_STANDBY' ? 'NIGHT[DIM]' : 'NIGHT[FULL]');
    const line1 = `${line1Tag.padEnd(10, ' ')} ${String(system.pwm).padStart(3, ' ')}%`;
    const line2 = `L:${String(Math.round(system.lux)).padStart(4, ' ')}Lx MOT:${system.motion || system.motionTimer > 0 ? 'YES' : 'NO '}`;

    document.getElementById('lcdLine1').textContent = line1;
    document.getElementById('lcdLine2').textContent = line2;
}

/* Interactive UART Terminal */
function appendTerm(text) {
    const out = document.getElementById('termOutput');
    out.textContent += text + '\n';
    out.scrollTop = out.scrollHeight;
}

function sendCmd(cmd) {
    appendTerm(`StreetLight> ${cmd}`);
    handleCommand(cmd);
}

function handleTerminalSubmit(e) {
    e.preventDefault();
    const input = document.getElementById('termInput');
    const cmd = input.value.trim();
    if (!cmd) return;
    sendCmd(cmd);
    input.value = '';
}

function handleCommand(cmd) {
    const parts = cmd.toLowerCase().split(' ');
    switch (parts[0]) {
        case 'help':
            appendTerm('Available CLI Commands:\n  help                 - Display help menu\n  status               - Print sensor & FSM state\n  mode <auto|on|off>   - Set operating mode\n  set lux <val>        - Set night threshold\n  set hold <sec>       - Set motion timer seconds');
            break;
        case 'status':
            appendTerm(`[STATUS]\n  Mode:         ${system.mode.toUpperCase()}\n  FSM State:    ${system.state}\n  Ambient Lux:  ${Math.round(system.lux)} Lux\n  PIR Motion:   ${system.motion ? 'DETECTED' : 'CLEAR'} (Timer: ${Math.ceil(system.motionTimer)}s)\n  PWM Duty:     ${system.pwm}%\n  Relay State:  ${system.relay ? 'CLOSED (ON)' : 'OPEN (OFF)'}\n  Energy Saved: ${system.energySavedKwh} kWh (75.0%)`);
            break;
        case 'mode':
            if (parts[1] === 'auto' || parts[1] === 'on' || parts[1] === 'off') {
                setSystemMode(parts[1]);
            } else {
                appendTerm("Usage: mode <auto|on|off>");
            }
            break;
        case 'set':
            if (parts[1] === 'lux' && parts[2]) {
                const val = parseFloat(parts[2]);
                document.getElementById('luxSlider').value = val;
                onLuxSliderChange(val);
                appendTerm(`[OK] Lux threshold adjusted to: ${val} Lux`);
            } else if (parts[1] === 'hold' && parts[2]) {
                system.holdDuration = parseInt(parts[2]);
                appendTerm(`[OK] Motion hold duration set to: ${system.holdDuration} seconds`);
            } else {
                appendTerm("Usage: set <lux|hold> <value>");
            }
            break;
        default:
            appendTerm(`Unknown command: '${cmd}'. Type 'help'.`);
            break;
    }
}

// Start simulation loop
stepSimulation();
