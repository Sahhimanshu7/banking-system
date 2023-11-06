cmake_minimum_required(VERSION 3.13)  # CMake version check
project(banking-system)               # Create project "banking-system"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of the project root directory as a source file
set(SOURCE_FILES main.cpp)
set (PROJECT_ROOT "${PROJECT_SOURCE_DIR}")
set (PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")

# Add executable target with source files listed in SOURCE_FILES variable
#add_executable(banking-system ${SOURCE_FILES}) 
add_executable(main ${PROJECT_SOURCE_DIR}/main.cpp)
