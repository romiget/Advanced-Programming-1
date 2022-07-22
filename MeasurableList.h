//
// Created by romig on 22/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_MEASURABLELIST_H
#define ADVANCED_PROGRAMMING_1_MEASURABLELIST_H

#include "Metric.h"
#include "Measurable.h"
#include "MeasurableAndDistance.h"
#include <list>

using namespace std;
class MeasurableList {
private:
    list<Measurable> measurables;
    Metric dis_func;
public:
    MeasurableList(Metric& func);
    void add(Measurable &m);
    void setMetric(Metric &func);
    list<MeasurableAndDistance> createDistanceList(Measurable &m);
    list<MeasurableAndDistance> kSmallestValues(list<MeasurableAndDistance> &l, int k);
    list<Measurable> KNN(Measurable &m, int k);
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLELIST_H
