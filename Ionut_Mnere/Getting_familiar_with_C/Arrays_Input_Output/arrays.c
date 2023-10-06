#include <stdlib.h>
#include <stdio.h>

int main()
{
	int one_score;
	int scores[3];
	printf("size of integers is: %lu \n", sizeof(one_score));
	printf("sizeof integer array is: %lu \n", sizeof(scores));

    float f_one_score;
	float f_scores[5];
	printf("size of float is: %lu \n", sizeof(f_one_score));
	printf("sizeof float array is: %lu \n", sizeof(f_scores));

	char one_char;
	char many_chars[20];
	printf("size of char is: %lu \n", sizeof(one_char));
	printf("sizeof char array is: %lu \n", sizeof(many_chars));

	// TODO next examples

	return EXIT_SUCCESS;
}