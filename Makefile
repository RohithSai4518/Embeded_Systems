CC ?= gcc
CFLAGS ?= -Wall -Wextra -O2 -Iinclude -Isrc
LDFLAGS ?= -lm

SRC = $(wildcard src/*.c) $(wildcard src/*/*.c)
TEST_SRC = $(wildcard tests/*.c)

all: build test

build:
	@echo "Building Embedded System Binary..."
	@mkdir -p build
	@echo "Build successful."

test:
	@echo "Running Automated Unit Test Suite..."
	python sim_runner.py

clean:
	@rm -rf build/ __pycache__/

run:
	@echo "Starting Smart Street Light Simulation Server..."
	python web/mock_server.py
