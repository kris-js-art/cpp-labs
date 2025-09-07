#include "Object.h"
#include <iostream>

int Object::objectCount = 0;

Object::Object() {
    objectCount++;
    serialNumber = objectCount;
}

void Object::displaySerialNumber() const {
    std::cout << "My number: " << serialNumber << std::endl;
}

int Object::getObjectCount() {
    return objectCount;
}

Object::~Object() = default;