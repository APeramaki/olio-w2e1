#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
using namespace::std;

class Car
{
private:
    string _brand;
    string _model;
    int _yearModel;
public:
    Car();
    void printData();
    void setBrand(string);
    void setModel(string);
    void setYearModel(int);
};

#endif // CAR_H
