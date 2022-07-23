//
// Created by romig on 22/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_MEASURABLE_H
#define ADVANCED_PROGRAMMING_1_MEASURABLE_H

#include <string>
#include <list>
#include "Metric.h"

using namespace std;
class Measurable {
private:
    list<double> attributes;
public:
    void addAttribute(double att);
    double distance(Measurable& other, Metric& func);
    list<double>& getAttributes();
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLE_H
