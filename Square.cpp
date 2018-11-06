#include "Square.h"



Square::Square()
{
    printf("Square created\n");
}


Square::~Square()
{
    printf("Square destroyed\n");
}

bool Square::intersect(Shape* shape)
{
    return shape->intersect(this);
}

bool Square::intersect(Circle* circle)
{
    printf("Intersection Square-circle\n");
    return true;
}

bool Square::intersect(Square* square)
{
    printf("Intersection Square-square\n");
    return true;
}

bool Square::intersect(Triangle* triangle)
{
    printf("Intersection Square-triangle\n");
    return true;
}
