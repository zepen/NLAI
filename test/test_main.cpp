//
// Created by User on 2019/4/19.
//
#include "../src/Supervised/Logistic_regression/logistic_regression.h"
#include "../src/Supervised/Svm/support_vector_machine.h"
#include "../src/Supervised/Neural_network/neural_network.h"

//class BinaryTree{
//public:
//    BinaryTree *rightChild = new BinaryTree();
//    BinaryTree leftChild;
//    int values;
//};


int main(int argc, char**argv) {
    std::cout << "Let's start" << std::endl;
    std::vector<double> read_vector = readTxt(argv[1]);
    std::vector<std::vector<double>> train_data = getTrainData(5, read_vector);
    showData(train_data);
    auto *lr = new nlai::logistic_regression(4, 2);
    lr->fit(train_data, 32, 0.01, 100, 0.1);
    lr->getData(0, train_data, 32);
    std::vector<double> y_true = lr->get_y_data();
    std::vector<double> y_pred = lr->predict(lr->get_x_data());
    confusion_matrix(y_true, y_pred, 0.5);
    delete lr;
    return 0;
}


