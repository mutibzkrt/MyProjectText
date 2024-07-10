cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add source files
set(SOURCES
    src/Model.cpp
    src/Main.cpp
)

# Executable definition
add_executable(MyProject ${SOURCES})
