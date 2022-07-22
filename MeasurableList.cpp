//
// Created by romig on 22/07/2022.
//

#include "MeasurableList.h"
#include <list>
#include <map>
#include <iterator>

using namespace std;

MeasurableList::MeasurableList(Metric& func) {
    this->dis_func = func;
}

list<Measurable> MeasurableList::kSmallestValues(map<Measurable, double> map) {
    for (auto const& x : map) {

    }
}
