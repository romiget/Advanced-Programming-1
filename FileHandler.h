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
};
#endif //ADVANCED_PROGRAMMING_1_FILEHANDLER_H
