#include "Sphere.h"



Sphere::Sphere(){}
Sphere::Sphere(double radius) :ThreeDShape(radius) {}
Sphere::~Sphere(){}

double Sphere::volume()
{
    return 4 * M_PI * base * base * base / 3;
}

double Sphere::area()
{
    return 4 * M_PI * base * base;
}

void Sphere::draw()
{
    printf("Drawing Sphere..\n");
}

void Sphere::print()
{
    printf("Sphere of radius %lf\n", base);
}