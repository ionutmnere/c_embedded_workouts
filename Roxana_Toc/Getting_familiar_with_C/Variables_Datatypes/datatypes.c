#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	int int_variable_1 = 10;
	int int_variable_2 = 20;
	float float_variable_1 = 10.11;
	float float_variable_2 = 20.22;
    char char_variable_1 = 'C';
	char char_variable_2 = 'd';
	printf("Printing the value of the first integer variable: %d \n", int_variable_1);
	printf("Printing the value of the second integer variable: %d \n", int_variable_2);
    printf("Printing the value of the first float variable: %f \n", float_variable_1);
	printf("Printing the value of the second float variable: %f \n", float_variable_2);
	printf("Printing the value of the first char variable: %c \n", char_variable_1);
	printf("Printing the value of the second char variable: %c \n", char_variable_2);
	printf("Printing the value of the first char variable: %d \n", char_variable_1);
	printf("Printing the value of the second char variable: %d \n", char_variable_2);


	short short_min = SHRT_MIN;
	short short_max = SHRT_MAX;

	printf("Minimim value of short: %hd \n", short_min);
	printf("Maximum value of short: %hd \n", short_max);
	printf("The size of short: %lu \n", sizeof(short_max));

	int int_min = INT_MIN;
	int int_max = INT_MAX;

	printf("Minimim value of int: %d \n", int_min);
	printf("Maximum value of int: %d \n", int_max);
	printf("The size of int: %lu \n", sizeof(int_max));

	long long_min = LONG_MIN;
	long long_max = LONG_MAX;

	printf("Minimim value of long: %ld \n", long_min);
	printf("Maximum value of long: %ld \n", long_max);
	printf("The size of long: %lu \n", sizeof(long_max));



	signed short sshort_min = SHRT_MIN;
	signed short sshort_max = SHRT_MAX;

	printf("Minimim value of signed short: %hd \n", sshort_min);
	printf("Maximum value of signed short: %hd \n", sshort_max);
	printf("The size of signed short: %lu \n", sizeof(sshort_max));

	signed int sint_min = INT_MIN;
	signed int sint_max = INT_MAX;

	printf("Minimim value of signed int: %d \n", sint_min);
	printf("Maximum value of signed int: %d \n", sint_max);
	printf("The size of signed int: %lu \n", sizeof(sint_max));

	signed long slong_min = LONG_MIN;
	signed long slong_max = LONG_MAX;

	printf("Minimim value of signed long: %ld \n", slong_min);
	printf("Maximum value of signed long: %ld \n", slong_max);
	printf("The size of signed long: %lu \n", sizeof(slong_max));



	unsigned short ushort_max = USHRT_MAX;

	printf("Maximum value of unsigned short: %hu \n", ushort_max);
	printf("The size of unsigned short: %lu \n", sizeof(ushort_max));

	unsigned int uint_max = UINT_MAX;

	printf("Maximum value of unsigned int: %u \n", uint_max);
	printf("The size of unsigned int: %lu \n", sizeof(uint_max));

	unsigned long ulong_max = ULONG_MAX;

	printf("Maximum value of unsigned long: %lu \n", ulong_max);
	printf("The size of unsigned long: %lu \n", sizeof(ulong_max));



	float float_max = FLT_MAX;

	printf("Maximum value of float: %f \n", float_max);
	printf("The size of float: %lu \n", sizeof(float_max));

	double double_max = DBL_MAX;

	printf("Maximum value of double: %lf \n", double_max);
	printf("The size of double: %lu \n", sizeof(double_max));



	char char_min = SCHAR_MIN;
	char char_max = SCHAR_MAX;

	printf("Minimim value of signed char: %d \n", char_min);
	printf("Maximum value of signed char: %d \n", char_max);
	printf("The size of signed char: %lu \n", sizeof(char_max));



	double num_1 = 43.234;
	float num_2 = 43.234;
	int result = num_1 == num_2;

	printf("Result: %d", result);

	return EXIT_SUCCESS;
}