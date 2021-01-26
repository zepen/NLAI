cmake_minimum_required(VERSION 3.12)
project(NLAI)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_CXX_STANDARD 11)
add_subdirectory (src)
add_subdirectory(test)
add_executable(${PROJECT_NAME}
        src/Supervised/Logistic_regression/logistic_regression.h
        src/Supervised/Logistic_regression/logistic_regression.cpp
        src/Supervised/SVM/support_vector_machine.cpp
        src/Supervised/SVM/support_vector_machine.h
        src/Supervised/Naive_Bayes/naive_bayes.cpp
        src/Supervised/Naive_Bayes/naive_bayes.h
        src/Supervised/Decision_Trees/decision_trees.cpp
        src/Supervised/Decision_Trees/decision_trees.h
        src/UnSupervised/DBSCAN/dbscan.cpp
        src/UnSupervised/DBSCAN/dbscan.h
        src/UnSupervised/K-means/k_means.cpp
        src/UnSupervised/K-means/k_means.h
        src/Supervised/NN/convolution_neural_networks.cpp
        src/Supervised/NN/convolution_neural_networks.h
        src/Supervised/NN/recurrent_neural_network.cpp
        src/Supervised/NN/recurrent_neural_network.h
        test/test_main.cpp
        src/Supervised/NN/neural_network.cpp
        src/Supervised/NN/neural_network.h
        src/utlis.cpp src/Supervised/GBDT/gradient_boosting_decision_tree.cpp src/Supervised/GBDT/gradient_boosting_decision_tree.h src/UnSupervised/PCA/principal_component_analysis.cpp src/UnSupervised/PCA/principal_component_analysis.h src/CRF/crf.cpp src/CRF/crf.h)