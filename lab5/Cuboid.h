#pragma once
#include "ThreeDShape.h"
class Cuboid :
    public ThreeDShape
{
protected:
    double height;
    double width;
public:
    Cuboid();
    Cuboid(double, double, double);
    ~Cuboid();

    double volume();
    double area();
    void print();
    void draw();
};

