#pragma once
#include "ThreeDShape.h"
class Sphere :
    public ThreeDShape
{
public:
    Sphere();
    Sphere(double);
    ~Sphere();

    double volume();
    double area();
    void print();
    void draw();
};

