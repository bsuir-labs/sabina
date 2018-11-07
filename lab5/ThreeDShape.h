#pragma once
#include "Shape.h"
class ThreeDShape :
    public Shape
{
protected:
    double base;
public:
    ThreeDShape();
    ThreeDShape(double);

    virtual double volume() = 0;
    virtual double area() = 0;
    virtual void draw() = 0;
    virtual void print() = 0;
};

