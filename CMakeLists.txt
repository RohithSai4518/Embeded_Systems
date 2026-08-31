cmake_minimum_required(VERSION 3.15)
project(SmartStreetLightEmbedded VERSION 2.4.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include src)

file(GLOB_RECURSE SOURCES "src/*.c")
file(GLOB_RECURSE TEST_SOURCES "tests/*.c")

add_library(embedded_core STATIC ${SOURCES})

enable_testing()
add_custom_target(run_tests COMMAND python sim_runner.py)
