#include "Cuboid.h"

Cuboid::Cuboid(){}
Cuboid::Cuboid(double l, double h, double w) :
    ThreeDShape(l),
    height(h),
    width(w)
{}
Cuboid::~Cuboid(){}

double Cuboid::volume()
{
    return base * width * height;
}

double Cuboid::area()
{
    return 2 * (base * width + height * width + base * height);
}

void Cuboid::draw()
{
    printf("Drawing cuboid..\n");
}

void Cuboid::print()
{
    printf("Cuboid. Size %lfx%lfx%lf\n", base, height, width);
}