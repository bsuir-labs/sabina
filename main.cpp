#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

#include <cstdlib>

int main()
{
    Triangle tri;
    Square sq;

    Shape * tri_ptr = &tri;
    Shape * sq_ptr = &sq;

    bool result = Shape::intersect(tri_ptr, sq_ptr);

    system("pause");
}