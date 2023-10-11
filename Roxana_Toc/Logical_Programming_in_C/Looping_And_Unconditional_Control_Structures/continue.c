# include <stdlib.h>
# include <stdio.h>

int main() 
{

	for (int i = 0; i < 6; i++) {

		if (4 == i) {
			continue;
		}

		printf("%d\n", i);
	}
	printf("\n\n");



	char grades[] = {'A', 'B', 'D', 'F', 'C', 'B', 'A'};
    size_t grades_len = sizeof(grades) / sizeof(grades[0]);
    printf("Here are the passing grades for students:\n");

	for (int i = 0; i < grades_len; i++) {
		if (grades[i] == 'F') {
			continue;
		}

		printf("Passing grade: %c\n", grades[i]);
	}
	printf("\n\n");



	char fav_letter = 'u';
	char response;
	printf("\nGuess my favorite letter to escape this infinite loop of boredom:\n");
	for ( ; ; ) {

		scanf(" %c", &response);

		if (response != 'u') {

			printf("BORED...zzzzz!\n");

			continue;
		}

        printf("You got it, u is indeed my favorite letter! \n");

        break;
	}
    printf("Outside of the loop now - whew!\n");
    printf("\n\n");



    int count = 0;
    int num_tickets = 3;
    int age;
	while (count < num_tickets) {

		printf("Please enter your age: ");
		scanf("%d", &age);

		if (age < 12) {

			printf("Sorry this is a movie for 12 and over.\n");

			continue;
		}

		printf("Here is your ticket - number: %d\n", count);
		count++;
	}
    printf("Outside of the loop now - sold %d tickets!\n", count);
    printf("\n\n");



    int num; 
    do {
	    printf("Computing squares of odd numbers (will ignore even numbers, 0 to exit): ");
	    scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            printf ("You've entered an even number %d, ignoring...\n", num);
            continue;
        }

	    printf("You entered %d, its square is %d\n", num, num * num);

    } while (1);    
    printf("\nValue of num at the end of the loop  %d\n", num);
    

    return EXIT_SUCCESS;
}