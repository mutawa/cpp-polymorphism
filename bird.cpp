#include "bird.h"

Bird::Bird(string nm, bool fly) : Animal(nm) {
    this->canFly = fly;
}

string Bird::toString() {
    return Animal::toString() + (canFly ? ", and I can fly!": ".");
}

string Bird::makeNoise() {
    return "quak";
}