//
// Created by romig on 22/07/2022.
//

#include "MeasurableAndDistance.h"
#include <cmath>

MeasurableAndDistance::MeasurableAndDistance(Measurable m, double d) {
    this->m = m;
    this->dis = d;
}

bool MeasurableAndDistance::operator<=(MeasurableAndDistance &other) {
    return this->dis <= other.dis;
}

bool MeasurableAndDistance::operator>=(MeasurableAndDistance &other) {
    return this->dis >= other.dis;
}

bool MeasurableAndDistance::operator<(MeasurableAndDistance &other) {
    return this->dis < other.dis;
}

bool MeasurableAndDistance::operator>(MeasurableAndDistance &other) {
    return this->dis > other.dis;
}

bool MeasurableAndDistance::operator==(MeasurableAndDistance &other) {
    return abs(this->dis - other.dis) < pow(10, -5);
}

Measurable MeasurableAndDistance::getMeasurable() {
    return this->m;
}
