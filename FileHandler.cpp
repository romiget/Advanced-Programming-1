//
// Created by ido on 7/29/22.
//
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include "FileHandler.h"

using namespace std;

vector<string> FileHandler::splitLine(string line, char delimiter) {
    vector<string> res;
    stringstream stringStream(line);
    string item;
    while (getline(stringStream, item, delimiter)) {
        res.push_back(item);
    }
    return res;
}

std::vector<Flower> FileHandler::getFlowers(const string& fileName) {
    fstream fs;
    fs.open(fileName);
    if (!fs) {
        throw exception();
    }
    vector<Flower> flowers;
    string line;
    while (getline(fs, line)) {
        vector<string> flower = splitLine(line, ',');
        vector<double> flowerData;
        for (int i = 0; i < flower.size() - 1; i++) {
            flowerData.push_back(stod(flower[i]));
        }
        flowers.emplace_back(flower[4], flowerData[0], flowerData[1], flowerData[2], flowerData[3]);
    }
    fs.close();
    return flowers;
}
