//
// Created by User on 2019/4/18.
//

#ifndef NLAI_LOGISTIC_REGRESSION_H
#define NLAI_LOGISTIC_REGRESSION_H

#include "../../utlis.h"

class logistic_regression {
public:
    logistic_regression();
    explicit logistic_regression(unsigned int features_size);
    std::vector<double> logist(std::vector<std::vector<double>>, unsigned int batch_size);
    std::vector<double> activation_func(std::vector<double > predict_y, unsigned batch_size);
    void splitData(std::vector<std::vector<double>> train_data);
    void fit(std::vector<std::vector<double>> train_data,
            unsigned int batch_size, double error, int max_iter, float learning_rate);
    void show_print();
private:
    std::vector<double> weights;
    double bias;
    unsigned int features_size;
    std::vector<std::vector<double>> x_data;
    std::vector<double> y_data;
};

#endif //NLAI_LOGISTIC_REGRESSION_H
