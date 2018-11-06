#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
public:
    Circle();
    virtual ~Circle();

    virtual bool intersect(Shape*);
    virtual bool intersect(Circle*);
    virtual bool intersect(Square*);
    virtual bool intersect(Triangle*);
};

