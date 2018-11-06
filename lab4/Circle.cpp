#include "Circle.h"



Circle::Circle()
{
    printf("Circle created\n");
}


Circle::~Circle()
{
    printf("Circle destroyed");
}

bool Circle::intersect(Shape* shape)
{
    return shape->intersect(this);
}

bool Circle::intersect(Circle* circle)
{
    printf("Intersection circle-circle\n");
    return true;
}

bool Circle::intersect(Square* square)
{
    printf("Intersection circle-square\n");
    return true;
}

bool Circle::intersect(Triangle* triangle)
{
    printf("Intersection circle-triangle\n");
    return true;
}