#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>

class Shape
{
public:
    virtual void print() = 0;
    virtual void draw() = 0;
    virtual double area() = 0;
    virtual double volume() = 0;
};

