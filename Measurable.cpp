//
// Created by romig on 22/07/2022.
//

#include "Measurable.h"
#include <string>

using namespace std;
double Measurable::distance(Measurable& other) {
    throw exception();
}

void Measurable::setMtype(string s) {
    this->mtype = s;
}
