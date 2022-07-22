//
// Created by romig on 22/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_MEASURABLE_H
#define ADVANCED_PROGRAMMING_1_MEASURABLE_H

#include <string>

using namespace std;
class Measurable {
private:
    string mtype;
public:
    double distance(Measurable& other);
    string& getMtype(){
        return mtype;
    }
protected:
    void setMtype(string s);
};

#endif //ADVANCED_PROGRAMMING_1_MEASURABLE_H
