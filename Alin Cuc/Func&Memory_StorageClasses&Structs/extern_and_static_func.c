#include <stdlib.h>
#include<stdio.h>

extern float compute_circle_area (float radius);
extern float compute_circle_circumference( float radius);

int main(){
	float radius = 10.2;

	printf("Area of the circle = %f\n", compute_circle_area(radius));
	printf("Circumferente of the circle = %f\n", compute_circle_circumference(radius));

	return EXIT_SUCCESS;
}