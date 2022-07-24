//
// Created by romig on 22/07/2022.
//

#include "MeasurableList.h"
#include <list>

using namespace std;

list<MeasurableAndDistance> MeasurableList::kSmallestValues(list<MeasurableAndDistance> &l, int k) {
    l.sort();
    for (int i = l.size(); i > k; i--) {
        l.pop_back();
    }
    return l;
}

list<Measurable> MeasurableList::KNN(list<Measurable>& measurables, Metric& metric, Measurable &m, int k) {
    if (k >= measurables.size())
        return measurables;
    list<MeasurableAndDistance> l = MeasurableList::createDistanceList(measurables, metric, m);
    l = MeasurableList::kSmallestValues(l, k);
    list<Measurable> knn;
    while(!l.empty()) {
        knn.push_front(l.back().getMeasurable());
        l.pop_back();
    }
    return knn;
}

list<MeasurableAndDistance> MeasurableList::createDistanceList(list<Measurable> &l, Metric& metric, Measurable &m) {
    list<MeasurableAndDistance> distances;

}
