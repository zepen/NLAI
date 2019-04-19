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
        for (double num : d) {
            std::cout << i << " " << num << " ";
        }
        std::cout << std::endl;
        i++;
    }
}

std::vector<int> generate_random(std::default_random_engine engine, int sample_size, int batch_size){
    std::vector<int> gen_index(static_cast<unsigned int>(batch_size));
    std::uniform_int_distribution<unsigned> u(0, static_cast<unsigned int>(sample_size));
    for (int i = 0; i < batch_size; ++i) {
        gen_index[i] = u(engine);
    }
    return gen_index;
}
