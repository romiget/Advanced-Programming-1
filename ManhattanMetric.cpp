//
// Created by ido on 7/22/22.
//

#include "ManhattanMetric.h"
#include <cmath>

double ManhattanMetric::metric(list<double> l1, list<double> l2) const {
    if (l1.size() != l2.size())
        throw exception();
    double distance = 0;
    while(!l1.empty()) {
        distance += abs(l1.front() - l2.front());
        l1.pop_front();
        l2.pop_front();
    }
    return distance;
}
