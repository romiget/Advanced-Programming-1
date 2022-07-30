//
// Created by romig on 22/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_MEASURABLELIST_H
#define ADVANCED_PROGRAMMING_1_MEASURABLELIST_H

#include "Metric.h"
#include "Measurable.h"
#include "MeasurableAndDistance.h"

using namespace std;
class MeasurableList {
private:
    static vector<MeasurableAndDistance> createDistanceList(vector<Measurable>& l, Metric& metric, Measurable &m);
    static vector<MeasurableAndDistance> kSmallestValues(vector<MeasurableAndDistance> &l, int k);
public:
    static vector<Measurable> KNN(vector<Measurable> &l, Metric& metric, Measurable m, int k);
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLELIST_H
