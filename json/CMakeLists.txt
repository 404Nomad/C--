cmake_minimum_required(VERSION 3.10)

# Set the project name
json()

set(CMAKE_CXX_STANDARD 20)

set(SOURCES 
    src/jsonLoader.cpp)

include_directories(src)

add_executable(json ${SOURCES})