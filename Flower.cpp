//
// Created by romig on 22/07/2022.
//

#include "Flower.h"
#include <string>
#include <list>

#include "Measurable.h"
#include "Metric.h"

using namespace std;

string type;
double cup_width;
double cup_length;
double petal_width;
double petal_length;

Flower::Flower(string &type, double cwidth, double clength, double pwidth, double plength) {
    this->type.assign(type);
    this->cup_width = cwidth;
    this->cup_length = clength;
    this->petal_width = pwidth;
    this->petal_length = plength;
}

string &Flower::getType() {
    return this->type;
}

double Flower::getCupWidth() const {
    return this->cup_width;
}

double Flower::getCupLength() const {
    return this->cup_length;
}

double Flower::getPetalWidth() const {
    return this->petal_width;
}

double Flower::getPetalLength() const {
    return this->petal_length;
}

double Flower::distance(Flower &other, Metric &func) const {
    list<double> l1, l2;
    l1.push_front(this->cup_width);
    l1.push_front(this->cup_length);
    l1.push_front(this->petal_width);
    l1.push_front(this->petal_length);
    l2.push_front(this->cup_width);
    l2.push_front(this->cup_length);
    l2.push_front(this->petal_width);
    l2.push_front(this->petal_length);
    return func.metric(l1, l2);
}
