#include "rectangle.h"

Rectangle::Rectangle() {}
Rectangle::~Rectangle() {}

double Rectangle::getArea() {
    return _width * _height;
}

double Rectangle::getCircum() {
    return 2 * (_width * _height);
}

void Rectangle::setWidth(double width) {
    _width = width;
}

void Rectangle::setHeight(double height) {
    _height = height;
}

