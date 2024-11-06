#include "student.h"

Student::Student() {}

void Student::setName(string name) {
    _name = name;
}

void Student::setStudentNumber(int studentNumber) {
    _studentNumber = studentNumber;
}

void Student::setAverage(double average) {
    _average = average;
}

string Student::getName() {
    return _name;
}

int Student::getStudentNumber() {
    return _studentNumber;
}

double Student::getAverage() {
    return _average;
}
