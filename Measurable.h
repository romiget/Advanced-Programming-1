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
    string type;
    vector<double> attributes;
public:
    Measurable();
    explicit Measurable(const string& s, string type);
    Measurable(const Measurable& measurable);
    string toString();
    void addAttribute(double att);
    double distance(Measurable& other, Metric& func);
    vector<double> getAttributes() const;
    string getType() const;
    void setType(basic_string<char> s);
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLE_H
