#include <iostream>
#include "../include/Object.h"

const int EXIT_OPTION = 0;

void displayMenu() {
    std::cout << "1. New object" << std::endl;
    std::cout << "2. Show amount of objects" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Choose action: ";
}

void createObject() {
    Object obj;
    std::cout << "Object created! ";
    obj.displaySerialNumber();
}

void showObjectCount() {
    std::cout << "All amount of objects: " << Object::getObjectCount() << std::endl;
}


int main() {
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                createObject();
            break;
            case 2:
                showObjectCount();
            break;
            case 0:
                std::cout << "Exiting..." << std::endl;
            break;
            default:
                std::cout << "Incorrect choice!" << std::endl;
            break;
        }

    } while (choice != EXIT_OPTION);

    return 0;
}

