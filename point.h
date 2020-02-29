#include <stdio.h>
#include <math.h>

typedef point {
  int x;
  int y;

} point_t;

typedef circle {
  point_t A;
  int r;
} Circle;

void enter_coordinate_circle(Circle* c);
void print_circle(Circle *c, File *f);
