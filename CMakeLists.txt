cmake_minimum_required(VERSION 3.25)
project(facade)

set(CMAKE_CXX_STANDARD 23)

add_executable(facade main.cpp src/Subsystem1.cpp src/Subsystem2.cpp src/Facade.cpp)
