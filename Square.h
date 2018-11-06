#pragma once
#include "Shape.h"
class Square :
    public Shape
{
public:
    Square();
    virtual ~Square();

    virtual bool intersect(Shape*);
    virtual bool intersect(Circle*);
    virtual bool intersect(Square*);
    virtual bool intersect(Triangle*);
};

