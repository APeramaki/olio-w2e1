#include "car.h"

Car::Car() {}

void Car::printData() {
    cout << "brand: " << _brand << endl;
    cout << "model: " << _model << endl;
    cout << "year : " << _yearModel << endl;
}

void Car::setBrand(string brand){
    _brand = brand;
}

void Car::setModel(string model){
    _model = model;
}

void Car::setYearModel(int yearModel){
    _yearModel = yearModel;
}
