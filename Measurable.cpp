//
// Created by romig on 22/07/2022.
//

#include "Measurable.h"
#include <string>
#include "Metric.h"

using namespace std;

void Measurable::addAttribute(double att) {
    this->attributes.push_back(att);
}

double Measurable::distance(Measurable& other, Metric& func) {
    return func.metric(this->getAttributes(), other.getAttributes());
}

vector<double>& Measurable::getAttributes() {
    return this->attributes;
}
