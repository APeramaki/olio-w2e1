#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double _width;
    double _height;
public:
    Rectangle();
    ~Rectangle();
    double getArea();
    double getCircum();
    void setWidth(double);
    void setHeight(double);
};

#endif // RECTANGLE_H
