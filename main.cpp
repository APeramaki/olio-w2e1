#include "car.h"
using namespace std;

int main()
{
    Car car = Car();
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(1995);
    car.printData();
    return 0;
}
