#include <iostream>
#include "Object.h"

int main() {
    
    Object obj1;
    obj1.displaySerialNumber();

    Object obj2;
    obj2.displaySerialNumber();

    Object obj3;
    obj3.displaySerialNumber();

    Object obj4;
    obj4.displaySerialNumber();

    std::cout << "Objects count: " << Object::getObjectCount() << std::endl;

    return 0;
}
