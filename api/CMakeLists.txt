cmake_minimum_required(VERSION 3.10)

# Set the project name
project(api)

set(CMAKE_CXX_STANDARD 20)

# Add the source files
set(SOURCES 
    src/main.cpp
)

include_directories(src)

# Find and link CURL
find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIRS})

add_executable(api ${SOURCES})
target_link_libraries(api ${CURL_LIBRARIES})
