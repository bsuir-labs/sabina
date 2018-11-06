#pragma once
#include <cstdio>

class Circle;
class Triangle;
class Square;

class Shape
{
public:
    Shape();
    virtual ~Shape();

    virtual bool intersect(Shape*) = 0;
    virtual bool intersect(Circle*) = 0;
    virtual bool intersect(Square*) = 0;
    virtual bool intersect(Triangle*) = 0;

    static bool intersect(Shape* one, Shape* two);
};
