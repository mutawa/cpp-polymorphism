#include "animal.h"


Animal::Animal(string nm) {
    this->name = nm;
}

string Animal::getName() {
    return this->name;
}

string Animal::toString() {
    return " My name is "  + name + "  "  + this->makeNoise();
}

string Animal::makeNoise() {
    return "-silence-";
}

