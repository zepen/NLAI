//
// Created by User on 2019/4/18.
//

#ifndef NLAI_LOGISTIC_REGRESSION_H
#define NLAI_LOGISTIC_REGRESSION_H

#include "../../utlis.h"

namespace nlai {
    class logistic_regression {
        public:
            logistic_regression();
            explicit logistic_regression(unsigned int features_size);
            std::vector<double> logist(std::vector<std::vector<double>> x_data);
            double loss(std::vector<double> predict_y, std::vector<double> real_y, unsigned batch_size);
            std::vector<double> activation_func(std::vector<double> predict_y);
            void getData(int iter, std::vector<std::vector<double>> train_data, unsigned batch_size);
            void fit(std::vector<std::vector<double>> train_data,
                     unsigned int batch_size, double error=0.01, int max_iter=1000, float learning_rate=0.1);
            void show_info();
            std::vector<double> get_weights();
            double get_bias();
        private:
            std::vector<double> weights;
            double bias;
            unsigned int features_size;
            std::vector<std::vector<double>> x_data;
            std::vector<double> y_data;
        };
}

#endif //NLAI_LOGISTIC_REGRESSION_H
