#include <stdlib.h>
#include <stdio.h>


// atio function - int
// int main()
// {

// 	char first_string[] = "1234";
// 	int first_int = atoi(first_string);

// 	printf("We now have an integer: %d\n",first_int );
// 	if(first_int ==1234){
// 		printf("We can perform integer comparison!\n");
// 	}
// 	return EXIT_SUCCESS;

// } 


// atio function - float
// int main()
// {

// 	char first_string[] = "1234.98899";
// 	float first_float = atof(first_string);

// 	printf("We now have an float: %f\n",first_float);
// 	printf("Add 100 to the value: %f\n", first_float + 100 );

// 	return EXIT_SUCCESS;

// } 

// atio function - long
int main()
{

	char first_string[] = "12121212121214421";
	
	float first_long = atol(first_string);

	printf("We now have a long: %ld\n",first_long);

	if(first_long == 12121212121214421){
		printf("We can perform long comperison\n");
	}

	return EXIT_SUCCESS;
} 