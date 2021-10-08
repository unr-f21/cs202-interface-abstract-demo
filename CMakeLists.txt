cmake_minimum_required(VERSION 3.20)
project(cs202_lab6_interfaces)

set(CMAKE_CXX_STANDARD 11)

add_executable(cs202_interfaces main.cpp boat.cpp IRunnable.cpp IRunnable.h Vehicle.cpp Vehicle.h ISinkable.h Car.cpp Car.h)
