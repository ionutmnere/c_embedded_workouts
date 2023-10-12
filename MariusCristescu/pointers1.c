#include <stdio.h>

int main()
{

	int radius = 25;
	int *radius_ptr = &radius;
	int *other_ptr = radius_ptr;
	printf("Value: %d \n", radius);
	printf("Memory: %p \n", &radius);
	printf("Memory pointer radius: %p \n", radius_ptr);
	printf("Memory pointer other :  %p \n", other_ptr);


	printf("Value radius: %d \n", *radius_ptr);
	printf("Value other : %d \n", *other_ptr);


	printf("Value mem radius: %p \n", &radius_ptr);
	printf("Value mem other : %p \n", &other_ptr);

	printf("Radius: %d \n", *&radius);


	radius = 23;

	printf("After change - radius: %d \n", *radius_ptr);
	printf("After changes - other: %d \n", *other_ptr);
	return 0;
}