#pragma once
#include "Shape.h"
class Triangle :
    public Shape
{
public:
    Triangle();
    virtual ~Triangle();

    virtual bool intersect(Shape*);
    virtual bool intersect(Circle*);
    virtual bool intersect(Square*);
    virtual bool intersect(Triangle*);
};

