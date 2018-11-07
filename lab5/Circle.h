#pragma once
#include "TwoDShape.h"
class Circle :
    public TwoDShape
{
public:
    Circle();
    Circle(double);
    virtual ~Circle();

    virtual double area();
    void print();
    void draw();
};

