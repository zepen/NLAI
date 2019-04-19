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
    auto *lr = new logistic_regression();
    lr->show_print();
    std::default_random_engine engine(static_cast<unsigned int>(time(nullptr)));
    std::vector<int> gr = generate_random(engine, train_data.size(), 32);
    std::cout << gr.size() << std::endl;
    for (int i : gr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::default_random_engine engine2(static_cast<unsigned int>(time(nullptr)));
    std::vector<int> gr2 = generate_random(engine2, train_data.size(), 32);
    std::cout << gr2.size() << std::endl;
    for (int i : gr2) {
        std::cout << i << " ";
    }
    delete lr;

    return 0;
}


