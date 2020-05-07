#include "point.h"
#include <math.h>
#include <stdio.h>

void enter_coordinate_circle(circle* c)
{
    printf("Введите координаты окружности: ");
    scanf("%d %d", &c->C.x, &c->C.y);
    printf("Введите радиус окружности: ");
    scanf("%d", &c->r);
}
void print_circle(circle* c, FILE* f)
{
    fprintf(f, "Circle((%d:%d),  %d)\n", c->C.x, c->C.y, c->r);
    printf("Circle((%d;%d), R=%d)\n", c->C.x, c->C.y, c->r);
}

float perimeter_circle(circle* c, FILE* f)
{
    float P = 2 * 3.14 * c->r;
    printf("Circle perimeter = %.2f\n", P);
    fprintf(f, "Circle perimeter = %.2f\n", P);
    return P;
}
float area_circle(circle* c, FILE* f)
{
    float S = 3.14 * c->r * c->r;
    printf("Circle area = %.2f\n", S);
    fprintf(f, "Circle area = %.2f\n", S);
    return S;
}