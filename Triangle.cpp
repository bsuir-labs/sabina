#include "Triangle.h"



Triangle::Triangle()
{
    printf("Triangle created\n");
}


Triangle::~Triangle()
{
    printf("Triangle destroyed\n");
}

bool Triangle::intersect(Shape* shape)
{
    return shape->intersect(this);
}

bool Triangle::intersect(Circle* circle)
{
    printf("Intersection Triangle-circle\n");
    return true;
}

bool Triangle::intersect(Square* square)
{
    printf("Intersection Triangle-square\n");
    return true;
}

bool Triangle::intersect(Triangle* triangle)
{
    printf("Intersection Triangle-triangle\n");
    return true;
}
