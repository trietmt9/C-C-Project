cmake_minimum_required(VERSION 3.10)
project(SearchAlgorithmsProject C)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/Inc)

# Specify the source files
set(SOURCE_FILES
    Src/main.c
)

# Add the executable target
add_executable(SearchAlgorithmsProject ${SOURCE_FILES})
