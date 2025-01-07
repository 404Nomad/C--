cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Exercice4Animal)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES 
    src/animal.cpp 
    src/chat.cpp
    src/chien.cpp
    src/main.cpp)

include_directories(src)

add_executable(animal ${SOURCES})