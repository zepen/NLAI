cmake_minimum_required(VERSION 3.12)
project(NLAI)

set(CMAKE_CXX_STANDARD 11)

add_executable(NLAI test/main.cpp src/nn.cpp include/nn.hpp include/utlis.h)