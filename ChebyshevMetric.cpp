//
// Created by ido on 7/22/22.
//

#include "ChebyshevMetric.h"
#include <cmath>

double ChebyshevMetric::metric(vector<double> l1, vector<double> l2) const {
    if (l1.size() != l2.size())
        throw exception();
    double distance = 0;
    auto iterator2 = l2.begin();
    for (auto iterator1 = l1.begin(); iterator1 != l1.end(); iterator1++, iterator2++) {
        if(abs(l1.front() - l2.front()) > distance)
            distance = abs(l1.front() - l2.front());
    }
    return distance;
}
