#include "point.h"
#include <stdio.h>
#include <math.h>

void enter_coordinate_circle(circle* c) {
  printf("Введите координаты окружности: ");
  scanf("%d %d", &c->A.x, &c->A.y );
  printf("Введите радиус окружности: ");
  scanf("%d", &c->r);
}
void print_circle(circle *c, FILE *f) {
fprintf(f, "circle((%d:%d),  %d)\n", c->A.x, c->A.y, c->r);
printf("circle((%d;%d), R=%d)\n", c->A.x, c->A.y, c->r);
}
