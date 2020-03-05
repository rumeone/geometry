#include <stdio.h>
#include "point.h"

int main() {

 FILE *f=fopen("Print", "w");
 circle c;

 enter_coordinate_circle(&c);

 print_circle(&c, f);

 fclose(f);
 printf("\n");

return 0;
}
