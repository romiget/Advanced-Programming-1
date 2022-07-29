//
// Created by romig on 22/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_MEASURABLE_H
#define ADVANCED_PROGRAMMING_1_MEASURABLE_H

#include <string>
#include <list>
#include <vector>
#include "Metric.h"

using namespace std;
class Measurable {
private:
    vector<double> attributes;
public:
    void addAttribute(double att);
    double distance(Measurable& other, Metric& func);
    vector<double>& getAttributes();
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLE_H
