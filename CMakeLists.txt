cmake_minimum_required(VERSION 3.12)
project(NLAI)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_CXX_STANDARD 11)
add_subdirectory (src)
add_subdirectory(test)
add_executable(${PROJECT_NAME}
        src/Supervised/Logistic_regression/logistic_regression.h
        src/Supervised/Logistic_regression/logistic_regression.cpp
        src/Supervised/Svm/support_vector_machine.cpp
        src/Supervised/Svm/support_vector_machine.h
        src/Supervised/Naive_Bayes/naive_bayes.cpp
        src/Supervised/Naive_Bayes/naive_bayes.h
        src/Supervised/Decision_Trees/decision_trees.cpp
        src/Supervised/Decision_Trees/decision_trees.h
        src/UnSupervised/DBSCAN/dbscan.cpp
        src/UnSupervised/DBSCAN/dbscan.h
        src/UnSupervised/K-means/k_means.cpp
        src/UnSupervised/K-means/k_means.h
        src/Supervised/CNN/convolutional_neural_networks.cpp
        src/Supervised/CNN/convolutional_neural_networks.h
        src/Supervised/RNN/recurrent_neural_network.cpp
        src/Supervised/RNN/recurrent_neural_network.h
        test/test_main.cpp
        src/Supervised/Neural_network/neural_network.cpp src/Supervised/Neural_network/neural_network.h)