#include <cstdlib>
#include "shapes.h"

int main()
{
    Shape *shapes[5];
    shapes[0] = new Rectangle(4, 5);
    shapes[1] = new Rectangle(3, 3);
    shapes[2] = new Circle(5);
    shapes[3] = new Cuboid(3, 4, 5);
    shapes[4] = new Sphere(5);

    for (int i = 0; i < 5; ++i)
    {
        printf("Area: %f\n", shapes[i]->area());
        printf("Volume: %f\n", shapes[i]->volume());
        shapes[i]->print();
        shapes[i]->draw();

        printf("\n");
    }
    system("pause");
    return 0;
}