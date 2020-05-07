#include "point.h"
#include <math.h>
#include <stdio.h>

int main()
{

    FILE* f = fopen("Print", "w");
    circle c;
    triangle t;

    enter_coordinate_circle(&c);

    enter_triangle_coordinate(&t);

    print_circle(&c, f);
    perimeter_circle(&c, f);
    area_circle(&c, f);
    print_triangle(&t,f);
    check_triangle(&t,f);
    perimeter_triangle(&t,f);
    area_triangle(&t,f);

    fclose(f);
    printf("\n");

    return 0;
}
