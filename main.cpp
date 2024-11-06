#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main() {

    // step 1
    cout << endl << "--- Step 1 ---" << endl;
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

    // step 3
    cout << endl << "--- Step 3 ---" << endl;

    Student student = Student();
    student.setName("Olli Oppilas");
    student.setStudentNumber(123123);
    student.setAverage(4.5);
    cout << "|---- Name ----|- Student Number -|- Average -|" << endl;
    cout << "| "
         << student.getName() << " |      "
         << student.getStudentNumber() << "      |    "
         << student.getAverage() << "    | " << endl;

    return 0;
}
