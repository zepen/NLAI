//
// Created by NZP on 2019-4-19.
//
#include "utlis.h"

std::vector<double > readTxt(const std::string &file_data){
    std::vector<double > read_vec;
    std::ifstream infile;
    infile.open(file_data);
    assert(infile.is_open());
    double tmp;
    while(!infile.eof())
    {
        infile >> tmp;
        read_vec.push_back(tmp);
    }
    infile.close();
    return read_vec;
}

std::vector<std::vector<double>> getTrainData(int features_size, std::vector<double> read_vec){
    int n = features_size;
    unsigned int m = read_vec.size() / n;
    std::vector<std::vector<double >> train_data(m);
    int i = 0;
    for (auto &vec : train_data){
        for (int j = 0; j < n; j++){
            vec.push_back(read_vec[i + j]);
        }
        i += 5;
    }
    return train_data;
}


void showData(std::vector<std::vector<double>> data){
    int i = 0;
    for (auto &d : data) {
        std::cout << i << " | ";
        for (double num : d) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
        i++;
    }
}

int random_unint(unsigned int max, unsigned int seed = 0)
{
    static std::default_random_engine e(seed);
    static std::uniform_int_distribution<int> u(0, max - 1);
    return u(e);
}

std::vector<int> generate_random(int sample_size, int batch_size){
    std::vector<int> gen_index(static_cast<unsigned int>(batch_size));
    for (int i = 0; i < batch_size; ++i) {
        gen_index[i] = random_unint(
                static_cast<unsigned int>(sample_size),
                static_cast<unsigned int>(time(nullptr)));
    }
    return gen_index;
}

void confusion_matrix(std::vector<double> y_true, std::vector<double> y_pred, double threshold){
    std::cout << "== The confusion Matrix == " <<  std::endl;
    std::vector<std::vector<double>> CM(2, std::vector<double>(2));
    for (int i = 0; i < y_true.size(); i++){
        double predict = y_pred[i] > threshold ? 1.0 : 0.0;
        if (predict == 0 && y_true[i] == 0){
            CM[0][0] += 1;
        } else if (predict == 1 && y_true[i] == 1){
            CM[1][1] += 1;
        } else if (predict == 0 && y_true[i] == 1) {
            CM[1][0] += 1;
        } else if (predict == 1 && y_true[i] == 0){
            CM[0][1] += 1;
        }
    }
    std::cout << "         ";
    std::cout << " | y_pred = 0 | y_pred = 1 | " << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout  << "y_true = " << i << "|";
        for (int j = 0; j < 2; j++){
            std::cout << "      " << CM[i][j] << "     ";
        }
        std::cout << "|" << std::endl;
    }
}
