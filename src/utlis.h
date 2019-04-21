//
// Created by NZP on 2018-11-20.
//

#ifndef NLAI_UTLIS_H
#define NLAI_UTLIS_H

#include <assert.h>
#include <vector>
#include <math.h>
#include <fstream>
#include<iostream>
#include <windows.h>
#include <unistd.h>
#include <algorithm>
#include <random>
#include <ctime>

std::vector<double > readTxt(const std::string &file_data);
std::vector<std::vector<double >> getTrainData(int features_size, std::vector<double > read_vec);
void showData(std::vector<std::vector<double >> data);
int random_unint(unsigned int batch_size, unsigned int seed);
std::vector<int> generate_random(int sample_size, int batch_size);

#endif //NLAI_UTLIS_H
