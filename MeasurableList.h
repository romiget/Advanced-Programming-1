//
// Created by romig on 22/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_MEASURABLELIST_H
#define ADVANCED_PROGRAMMING_1_MEASURABLELIST_H

#include "Metric.h"
#include "Measurable.h"
#include <list>
#include <map>

using namespace std;
class MeasurableList {
private:
    list<Measurable> measurables;
    Metric dis_func;
public:
    MeasurableList(Metric func);
    void add(Measurable m);
    void setMetric(Metric func);
    map<Measurable, double> createDistanceMap(Measurable m);
    list<Measurable> kSmallestValues(map<Measurable, double> map);
    list<Measurable> KNN(Measurable m);
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLELIST_H
