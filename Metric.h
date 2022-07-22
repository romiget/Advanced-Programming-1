//
// Created by ido on 7/22/22.
//

#ifndef ADVANCED_PROGRAMMING_1_METRIC_H
#define ADVANCED_PROGRAMMING_1_METRIC_H

#include <list>
using namespace std;

class Metric {
public:
    virtual double metric(list<double> l1, list<double> l2) const;
};

#endif //ADVANCED_PROGRAMMING_1_METRIC_H
