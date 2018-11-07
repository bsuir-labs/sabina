#pragma once
#include "Shape.h"

class TwoDShape :
    public Shape
{
protected:
    double base;
public:
    TwoDShape();
    TwoDShape(double);
    double volume() { return 0; };
    virtual double area() = 0;
    virtual void draw() = 0;
    virtual void print() = 0;
};