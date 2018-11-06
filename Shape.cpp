#include "Shape.h"

// all printfs are for debug only

Shape::Shape()
{
    printf("Shape created\n");
}


Shape::~Shape()
{
    printf("Shape destroyed\n");
}


bool Shape::intersect(Shape* x, Shape* y)
{
    return y->intersect(x);
}