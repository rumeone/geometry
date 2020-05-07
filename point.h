#include <stdio.h>
#include <math.h>

typedef struct point {
  int x;
  int y;

 } point_t;

typedef struct circle {
  point_t C;
  int r;
} circle;

typedef struct triangle {
	point_t T[4];
}triangle;

void enter_coordinate_circle(circle* c);
void print_circle(circle *c, FILE *f);
float perimeter_circle(circle* c, FILE* f);
float area_circle(circle* c, FILE* f);
void enter_triangle_coordinate(triangle* t);
void print_triangle(triangle* t, FILE* f);
int check_triangle(triangle* t, FILE* f);
float perimeter_triangle(triangle* t, FILE* f);
float area_triangle(triangle* t, FILE* f);


