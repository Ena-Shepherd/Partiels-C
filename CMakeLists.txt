cmake_minimum_required(VERSION 3.0)

# Executable name
set(PROJECT_NAME
    out
)

project(${PROJECT_NAME} C)

# Source files
file(GLOB SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} m)
