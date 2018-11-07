#pragma once
#include "TwoDShape.h"
class Rectangle :
    public TwoDShape
{
protected:
    double width;
public:
    Rectangle();
    Rectangle(double, double);
    ~Rectangle();

    virtual double area();
    void print();
    void draw();
};

