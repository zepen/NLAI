//
// Created by User on 2019/4/18.
//
#include "../../utlis.h"
#include "logistic_regression.h"

nlai::logistic_regression::logistic_regression() = default;

void nlai::logistic_regression::show_info() {
    std::cout << "[INFO] This is logistic regression algorithm!" << std::endl;
}

nlai::logistic_regression::logistic_regression(unsigned int features_size) {
    show_info();
    std::cout << "[INFO] init all params..." << std::endl;
    for (int i = 0; i < features_size; i++){
        this->weights.push_back(0.01);
    }
    this->bias = 0;
    this->features_size = features_size;
}

std::vector<double> nlai::logistic_regression::logist(std::vector<std::vector<double>> x_data){
    std::vector<double> predict_y;
    for (auto &sample : x_data){
        double y = 0;
        for (int f = 0; f < this->features_size; f++){
             y += this->weights[f] * sample[f];
        }
        y += this->bias;
        predict_y.push_back(y);
    }
    return predict_y;
}

double nlai::logistic_regression::loss(std::vector<double> predict_y, std::vector<double> real_y, unsigned batch_size){
    double sum_loss = 0;
    for (int i = 0; i < predict_y.size(); i++){
        sum_loss += real_y[i] * log(predict_y[i]) + (1 - real_y[i]) * log(1 - predict_y[i]);
    }
    return - sum_loss / batch_size;
}


std::vector<double> nlai::logistic_regression::activation_func(std::vector<double> predict_y) {
    std::vector<double> activate_y(predict_y.size());
    for (int i = 0; i < predict_y.size(); i++){
        activate_y[i] = ((double) 1 / (1 + exp(-predict_y[i])));
    }
    return activate_y;
}


void nlai::logistic_regression::getData(int iter, std::vector<std::vector<double>> train_data, unsigned int batch_size){
    std::vector<int> gen_index = generate_random(train_data.size(), batch_size);
    std::cout << "[INFO] get "<< iter << " step batch data " << std::endl;
    this->x_data.clear();
    this->y_data.clear();
    this->x_data.resize(batch_size);
    for (int i = 0; i < batch_size; ++i){
        this->x_data[i].resize(this->features_size);
    }
    for (int i = 0; i < batch_size; i++){
        this->y_data.push_back(0);
    }
    int k = 0;
    for (auto i : gen_index){
        for (int j = 0; j < this->features_size; j++){
            this->x_data[k][j] = train_data[i][j];
        }
        this->y_data[k] = train_data[i][this->features_size];
        k++;
    }
}

void nlai::logistic_regression::fit(std::vector<std::vector<double>> train_data,
        unsigned int batch_size, double error, int max_iter, float learning_rate) {
    for (int it = 0; it < max_iter; it++){
        getData(it, train_data, batch_size);
        std::vector<double> predict_y = activation_func(logist(this->x_data));
        double loss_ = loss(predict_y, this->y_data, batch_size);
        std::cout << "The Loss is: " << loss_ << std::endl;
        for (int n = 0; n < this->features_size; n++){
            double gradient = 0;
            for (int m = 0; m < batch_size; m++){
                gradient += (this->y_data[m] - predict_y[m]) * this->x_data[m][n];
            }
            this->weights[n] += learning_rate * ((double) 1 / batch_size) * gradient;
        }
        if (loss_ <= error){
            break;
        }
    }
}

<<<<<<< HEAD
=======
std::vector<double> nlai::logistic_regression::predict(std::vector<std::vector<double>> x) {
    return activation_func(logist(x_data));
}
>>>>>>> origin/master


std::vector<double> nlai::logistic_regression::get_weights(){
    return this->weights;
}

double nlai::logistic_regression::get_bias() {
    return this->bias;
}
