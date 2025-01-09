cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ihm)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find wxWidgets
find_package(wxWidgets REQUIRED COMPONENTS core base)

# Include wxWidgets setup
include(${wxWidgets_USE_FILE})

# Add executable
add_executable(wxApp main.cpp)

# Link wxWidgets libraries
target_link_libraries(wxApp PRIVATE ${wxWidgets_LIBRARIES})

# Optionally, add include directories explicitly (if required)
target_include_directories(wxApp PRIVATE ${wxWidgets_INCLUDE_DIRS})
