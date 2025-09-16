#include <iostream>
#include "Object.h"

int main() {
    int choice;

    do {
        std::cout << "1. New object" << std::endl;
        std::cout << "2. Show amount of objects" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choose action: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Object obj;
                std::cout << "Object created! ";
                obj.displaySerialNumber();
                break;
            }
            case 2: {
                std::cout << "All amount of objects: " << Object::getObjectCount() << std::endl;
                break;
            }
            case 0: {
                std::cout << "Exiting..." << std::endl;
                break;
            }
            default: {
                std::cout << "Incorrect choice!" << std::endl;
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
