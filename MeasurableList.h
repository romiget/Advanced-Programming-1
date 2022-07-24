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
    static list<MeasurableAndDistance> createDistanceList(list<Measurable>& l, Metric& metric, Measurable &m);
    static list<MeasurableAndDistance> kSmallestValues(list<MeasurableAndDistance> &l, int k);
public:
    list<Measurable> KNN(list<Measurable> &l, Metric& metric, Measurable &m, int k);
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLELIST_H
