//
// Created by User on 2019/4/18.
//

#ifndef NLAI_LOGISTIC_REGRESSION_H
#define NLAI_LOGISTIC_REGRESSION_H

#include "../utlis.h"

namespace nlai {

    class LogisticRegression {
        public:
        LogisticRegression();
            explicit LogisticRegression(unsigned int features_size, unsigned label_num);
            std::vector<double> logist(std::vector<std::vector<double>> x_data);
            double loss(std::vector<double> predict_y, std::vector<double> real_y, unsigned batch_size);
            std::vector<double> activation_func(std::vector<double> predict_y);
            void getData(int iter, std::vector<std::vector<double>> train_data, unsigned batch_size);
            void fit(std::vector<std::vector<double>> train_data,
                     unsigned int batch_size, double error=0.01, int max_iter=100, float learning_rate=0.001);
            std::vector<double> predict(std::vector<std::vector<double>> x_data);
            static void show_info();
            std::vector<double> get_weights();
            double get_bias();
            std::vector<std::vector<double>> get_x_data();
            std::vector<double> get_y_data();
            ~LogisticRegression();
        private:
            std::vector<double> weights;
            double bias;
            unsigned int features_size;
            std::vector<std::vector<double>> x_data;
            std::vector<double> y_data;
            unsigned int label_num;
        };
}

#endif //NLAI_LOGISTIC_REGRESSION_H
