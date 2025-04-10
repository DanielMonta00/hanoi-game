cmake_minimum_required(VERSION 3.10)

project(HanoiGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add include and src directories
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

# Find SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Executable
add_executable(HanoiGame ${SOURCES})

# Link SFML
target_link_libraries(HanoiGame sfml-graphics sfml-window sfml-system)
