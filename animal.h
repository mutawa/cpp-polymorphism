#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal  {
private: 
    string name;
public:
    Animal(string nm);
    string getName();
    string toString();
    virtual string makeNoise();
};

#endif //ANIMAL_H