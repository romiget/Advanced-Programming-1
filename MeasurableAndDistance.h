//
// Created by romig on 22/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_MEASURABLEANDDISTANCE_H
#define ADVANCED_PROGRAMMING_1_MEASURABLEANDDISTANCE_H

#include "Measurable.h"

class MeasurableAndDistance {
private:
    Measurable m;
    double dis;
public:
    MeasurableAndDistance(Measurable m, double d);
    bool operator<=(MeasurableAndDistance& other);
    bool operator>=(MeasurableAndDistance& other);
    bool operator<(MeasurableAndDistance& other);
    bool operator>(MeasurableAndDistance& other);
    bool operator==(MeasurableAndDistance& other);
    Measurable getMeasurable();
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLEANDDISTANCE_H
