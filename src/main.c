#include "point.h"
#include <math.h>
#include <stdio.h>

int main()
{

    FILE* f = fopen("Print", "w");
    circle c;

    enter_coordinate_circle(&c);

    print_circle(&c, f);
    perimeter_circle(&c, f);
    area_circle(&c, f);

    fclose(f);
    printf("\n");

    return 0;
}
