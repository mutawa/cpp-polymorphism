#include <iostream>
#include <vector>

#include "bird.h"
using namespace std;


int main() {
    system("pwd");
    vector<Animal> animals;

    animals.push_back(Bird("donald"));
    animals.push_back(Bird("selma", false));

    
    for(int i=0; i<animals.size(); i++) {
        cout << animals[i].toString() << endl;
    }
    

    return 0;
}

