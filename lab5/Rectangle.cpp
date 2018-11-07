#include "Rectangle.h"



Rectangle::Rectangle():TwoDShape(0)
{
}

Rectangle::Rectangle(double a, double b) : TwoDShape(a), width(b)
{
}

Rectangle::~Rectangle()
{
    fprintf(stderr, "Destructing Rectangle\n");
}

double Rectangle::area()
{
    fprintf(stderr, "Area of rectangle...\n");
    return base * width;
}

void Rectangle::print()
{
    printf("Rectangle. Size: %lfx%lf\n", base, width);
}

void Rectangle::draw()
{
    printf("Printing only integer sizes\n");
    for (int i = 0; i < base; ++i)
    {
        for (int j = 0; j < width; ++j)
            printf("#");
        printf("\n");
    }
}