cmake_minimum_required(VERSION 3.12)
project(NLAI)

set(CMAKE_CXX_STANDARD 11)

add_executable(NLAI nlai/test/main.cpp nlai/src/mashine_learning/lr/logistic_regression.hpp nlai/src/deep_learning/cnn/cnn.hpp nlai/src/deep_learning/rnn/rnn.hpp nlai/src/mashine_learning/k-menas/k-means.h nlai/src/deep_learning/mlp/mlp.hpp)