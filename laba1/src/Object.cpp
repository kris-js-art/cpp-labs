#include <iostream>
#include "Object.h"

using namespace std;

int Object::objectCount = 0;

Object::Object() {
    objectCount++;
    serialNumber = objectCount;
}

void Object::displaySerialNumber() const {
    cout << "My number: " << serialNumber << endl;
}

int Object::getObjectCount() {
    return objectCount;
}

Object::~Object() = default;