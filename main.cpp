#include "car.h"
#include "rectangle.h"

using namespace std;

int main() {

    // step 1
    Car car = Car();
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(1995);
    car.printData();

    // step 2
    cout << endl << "--- Step 2 ---" << endl;

    Rectangle* rect = new Rectangle();
    rect->setHeight(2.5);
    rect->setWidth(3.0);
    cout << "Area        : " << rect->getArea() << endl;
    cout << "Circumsfere : " << rect->getCircum() << endl;
    delete rect;

    return 0;
}
