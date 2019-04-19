#include <utility>

//
// Created by User on 2019/4/18.
//
#include "../../utlis.h"
#include "logistic_regression.h"

logistic_regression::logistic_regression() = default;

void logistic_regression::show_print() {
    std::cout << "This is logistic regression algorithm!" << std::endl;
}

logistic_regression::logistic_regression(unsigned int features_size) {
    for (int i = 0; i < features_size; i++){
        this->weights[i] = 0.01;
    }
    this->bias = 0;
    this->features_size = features_size;
    std::cout << "[INFO] init all params..." << std::endl;
}

std::vector<double > logistic_regression::logist(std::vector<std::vector<double>>, unsigned int batch_size){


}


std::vector<double> logistic_regression::activation_func(std::vector<double> predict_y, unsigned int batch_size) {
    std::vector<double> activate_y;
    for (int i = 0; i < batch_size; i++){
        activate_y[i] = (1 / (1 + exp(-predict_y[i])));
    }
    return activate_y;
}

void logistic_regression::splitData(std::vector<std::vector<double>> train_data){
    for (int i = 0; i < train_data.size(); i++){
        for (int j = 0; j < this->features_size; j++){
            this->x_data[i][j] = train_data[i][j];
        }
        this->y_data[i] = train_data[i][this->features_size];
    }
}

void logistic_regression::fit(std::vector<std::vector<double>> train_data,
        unsigned int batch_size, double error, int max_iter=100, float learning_rate=0.01) {
    splitData(std::move(train_data));
    for (int it = 0; it < max_iter; it++){
        for (int n = 0; n < this->features_size; n++){
            for (int m = 0; m < batch_size; m++){

            }
        }

    }
}



