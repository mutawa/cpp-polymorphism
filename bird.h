#ifndef BIRD_H
#define BIRD_H

#include "animal.h"
#include <iostream>
using namespace std;

class Bird: public Animal {
private:
    bool canFly;
public:
    Bird(string nm, bool fly = true);
    string makeNoise();
    string toString();
};

#endif // BIRD_H