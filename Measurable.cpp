//
// Created by romig on 22/07/2022.
//

#include "Measurable.h"
#include <string>
#include "Metric.h"
#include <sstream>

using namespace std;

Measurable::Measurable() {
    this->attributes = vector<double>();
}

Measurable::Measurable(const string& s) {
    stringstream str(s);
    string word;
    this->attributes = vector<double>();

    while (getline(str, word, ',')) {
        try {
            this->addAttribute(stod(word));
        }
        catch (invalid_argument& e) {
            continue;
        }
    }
}

string Measurable::toString() {
    string str = string();
    for (double d : this->attributes) {
        str.append(to_string(d));
    }
    return str;
}

void Measurable::addAttribute(double att) {
    this->attributes.push_back(att);
}

double Measurable::distance(Measurable& other, Metric& func) {
    return func.metric(this->getAttributes(), other.getAttributes());
}

vector<double>& Measurable::getAttributes() {
    return this->attributes;
}
