cmake_minimum_required(VERSION 3.20)
project(cs202_lab6_inheritance)

set(CMAKE_CXX_STANDARD 11)

add_executable(cs202_lab6_inheritance main.cpp sailboat.cpp boat.cpp IRunnable.cpp IRunnable.h Vehicle.cpp Vehicle.h ISinkable.h Car.cpp Car.h)
