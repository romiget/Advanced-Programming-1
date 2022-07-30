//
// Created by romig on 22/07/2022.
//

#include "MeasurableList.h"
#include <algorithm>

using namespace std;

vector<MeasurableAndDistance> MeasurableList::kSmallestValues(vector<MeasurableAndDistance> &l, int k) {
    std::sort(l.begin(), l.end());
    for (int i = l.size(); i > k; i--) {
        l.pop_back();
    }
    return l;
}

vector<Measurable> MeasurableList::KNN(vector<Measurable>& measurables, Metric& metric, Measurable m, int k) {
    if (k >= measurables.size())
        return measurables;
    vector<MeasurableAndDistance> l = MeasurableList::createDistanceList(measurables, metric, m);
    l = MeasurableList::kSmallestValues(l, k);
    vector<Measurable> knn;
    for (int i = 0; i < k; i++) {
        knn.push_back(l[i].getMeasurable());
    }
    return knn;
}

vector<MeasurableAndDistance> MeasurableList::createDistanceList(vector<Measurable> &l, Metric& func, Measurable &m) {
    vector<MeasurableAndDistance> distances;
    for (auto & i : l) {
        distances.emplace_back(i, i.distance(m, func));
    }
    return distances;
}
