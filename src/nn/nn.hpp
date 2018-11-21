//
// Created by NZP on 2018-11-20.
//

#ifndef NLAI_NN_HPP
#define NLAI_NN_HPP
#include "utlis.h"

namespace nlai{
    namespace neural_net{
        class BaseNeuralNet{
        public:
            BaseNeuralNet() = default;
            virtual void show() = 0;
        };
        class NeuralNet_1: public BaseNeuralNet{
        public:
            NeuralNet_1();
            void show() override;
        };
    }
    nlai::neural_net::NeuralNet_1::NeuralNet_1() = default;

    void nlai::neural_net::NeuralNet_1::show() {
        cout << "i am call" << endl;
    }

}

#endif //NLAI_NN_HPP
