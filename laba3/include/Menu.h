#ifndef LABA3_MENU_H
#define LABA3_MENU_H

#include "../include/Student.h"
#include <span>

void displayMenu();
void clearInputBuffer();

[[maybe_unused]] void addStudent(std::span<Student*>& students, int& studentCount);
void displayStudents(std::span<Student*> students);

#endif