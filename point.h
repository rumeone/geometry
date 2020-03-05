#include <stdio.h>
#include <math.h>

typedef struct point {
  int x;
  int y;

 } point_t;

typedef struct circle {
  point_t A;
  int r;
} circle;

void enter_coordinate_circle(circle* c);
void print_circle(circle *c, FILE *f);

