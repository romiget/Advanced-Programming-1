//
// Created by ido on 7/29/22.
//

#ifndef ADVANCED_PROGRAMMING_1_FILEHANDLER_H
#define ADVANCED_PROGRAMMING_1_FILEHANDLER_H
#include "Flower.h"
class FileHandler {
public:
    static std::vector<std::string> splitLine(std::string line, char delimiter);
    static std::vector<Flower> getFlowers(const string& fileName);
    static Flower createFlower(const string& line);
    static void fileReader(const vector<Flower>& flowers, fstream& fs, int k);
    static string knnCheck(vector<Measurable> measurables);
};
#endif //ADVANCED_PROGRAMMING_1_FILEHANDLER_H
