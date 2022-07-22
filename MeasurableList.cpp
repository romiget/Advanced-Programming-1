//
// Created by romig on 22/07/2022.
//

#include "MeasurableList.h"
#include <list>

using namespace std;

MeasurableList::MeasurableList(Metric& func) {
    this->dis_func = func;
}

void MeasurableList::add(Measurable &m) {
    this->measurables.push_front(m);
}

void MeasurableList::setMetric(Metric &func) {
    this->dis_func = func;
}

list<MeasurableAndDistance> MeasurableList::kSmallestValues(list<MeasurableAndDistance> &l, int k) {
    l.sort();
    for (int i = l.size(); i > k; i--) {
        l.pop_back();
    }
    return l;
}

list<Measurable> MeasurableList::KNN(Measurable &m, int k) {
    if (k >= this->measurables.size())
        return measurables;
    list<MeasurableAndDistance> l = MeasurableList::createDistanceList(m);
    l = MeasurableList::kSmallestValues(l, k);
    list<Measurable> knn;
    while(!l.empty()) {
        knn.push_front(l.back().getMeasurable());
        l.pop_back();
    }
    return knn;
}
