#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(double radius):TwoDShape(radius) {}


Circle::~Circle()
{
}

double Circle::area()
{
    return M_PI * base * base;
}

void Circle::print()
{
    printf("Circle. Radius: %lf\n", base);
}

void Circle::draw()
{
    printf("Imagine, here's a circle\n");
}