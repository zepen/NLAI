//
// Created by User on 2019/4/19.
//
#include "../src/Supervised/Logistic_regression/logistic_regression.h"
#include "../src/Supervised/Svm/support_vector_machine.h"
#include "../src/Supervised/Neural_network/neural_network.h"

int main(int argc, char**argv) {
    auto *lr = new logistic_regression();
    auto *svm = new support_vector_machine();
    auto *nn = new neural_network();
    lr->show_print();
    svm->show_print();
    nn->show_print();
    delete lr;
    delete svm;
    delete nn;
    return 0;
}
