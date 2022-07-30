//
// Created by romig on 22/07/2022.
//
#pragma once

#ifndef ADVANCED_PROGRAMMING_1_FLOWER_H
#define ADVANCED_PROGRAMMING_1_FLOWER_H

#include "Measurable.h"
#include "Metric.h"
#include <string>

using namespace std;

class Flower : public Measurable {
private:
    string type;
    double cup_width;
    double cup_length;
    double petal_width;
    double petal_length;
public:
    Flower(string &type, double cwidth, double clength, double pwidth, double plength);
    string toString();
    string &getType();
};

#endif //ADVANCED_PROGRAMMING_1_FLOWER_H
