#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "arithmetic.h"

float compute_circle_area(float radius) {
  return M_PI * radius * radius;
}

int main() 
{
    float radius = 7.8;
    float area = compute_circle_area(radius);

    printf("Area of the circle with radius %.2f is %.2f\n", radius, area);
    printf("\n\n");




    float a = 100.44;
    float b = 23.87;

    printf("%.2f + %.2f = %.2f\n", a, b, add(a, b));
    printf("%.2f - %.2f = %.2f\n", a, b, subtract(a, b));
    printf("%.2f * %.2f = %.2f\n", a, b, multiply(a, b));
    printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));

    return EXIT_SUCCESS;
}
