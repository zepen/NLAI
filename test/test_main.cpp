//
// Created by User on 2019/4/19.
//
#include "../src/Supervised/Logistic_regression/logistic_regression.h"
#include "../src/Supervised/Svm/support_vector_machine.h"
#include "../src/Supervised/Neural_network/neural_network.h"


int main(int argc, char**argv) {
    std::cout << "Let's start" << std::endl;
    std::vector<double> read_vector = readTxt(argv[1]);
    std::vector<std::vector<double>> train_data = getTrainData(5, read_vector);
    showData(train_data);
    auto *lr = new nlai::logistic_regression(4);
    lr->fit(train_data, 32);
    lr->pr
    delete lr;
    return 0;
}


