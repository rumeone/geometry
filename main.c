#include <stdio.h>
#include "point.h"

int main() {

FILE *f=fopen("Print", "w");
circle c;

   print_cirlce(&c, f);

fclose(f);
    printf("\n");

    return 0;
}