//
// Created by ido on 7/22/22.
//

#include "EuclideanMetric.h"
#include <cmath>

using namespace std;

double EuclideanMetric::metric(list<double> l1, list<double> l2) const {
    if (l1.size() != l2.size())
        throw exception();
    double distance = 0;
    while(!l1.empty()) {
        distance += pow(l1.front() - l2.front(), 2);
        l1.pop_front();
        l2.pop_front();
    }
    return sqrt(distance);
}
