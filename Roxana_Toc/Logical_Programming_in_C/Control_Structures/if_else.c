# include <stdlib.h>
# include <stdio.h>

int main() 
{
	if (1) {
		printf("The condition evaluated to true!\n\n");
	} else {
		printf("The condition evaluated to false.\n\n");
	}


    printf("\n\n");



	int response;

	printf("Please enter a multiple of 5: ");
	scanf("%d", &response);

	if (response % 5 == 0) {
		printf("The number you entered, %d, is indeed a multiple of 5!\n\n", response);
	} else {
		printf("The number you entered, %d, is not a multiple of 5:-(\n\n", response);
	}


    printf("\n\n");


	int first_num;
	int second_num;

	printf("Please enter the first number: ");
	scanf("%d", &first_num);

	if (first_num % 10 == 0) {
		printf("Please enter the second number: ");
		scanf("%d", &second_num);

		printf("Result %d + %d = %d\n\n", first_num, second_num, first_num + second_num);
	}
	else {
		printf("Please enter the second number: ");
		scanf("%d", &second_num);

		printf("Result %d - %d = %d\n\n", first_num, second_num, first_num - second_num);
	}


	return EXIT_SUCCESS;
}
