cmake_minimum_required(VERSION 3.12)
project(NLAI)

set(CMAKE_CXX_STANDARD 11)

add_executable(NLAI test/main.cpp src/mashine_learning/lr/logistic_regression.hpp src/deep_learning/cnn/cnn.hpp src/deep_learning/rnn/rnn.hpp src/mashine_learning/k-menas/k-means.h src/deep_learning/mlp/mlp.hpp)