cmake_minimum_required(VERSION 3.25)
project(facade)

set(CMAKE_CXX_STANDARD 23)

add_executable(facade main.cpp include/Subsystem1.hpp src/Subsystem1.cpp include/Subsystem2.hpp src/Subsystem2.cpp include/Facade.hpp src/Facade.cpp)
