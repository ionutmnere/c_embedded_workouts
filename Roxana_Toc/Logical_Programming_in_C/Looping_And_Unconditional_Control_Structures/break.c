# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

int main() 
{

	for (int i = 0; i <= 6; i++) {

		if (4 == i) {
			break;
		}

		printf("%d\n", i);
	}
	printf("\n\n");



	int scores[] = {45, 57, 68, 23, 97, 72, 34, 85};
    size_t scores_len = sizeof(scores) / sizeof(scores[0]);

	for (int i = 0; i < scores_len; i++) {
		printf("element %d score %d\n", i, scores[i]);

		if (scores[i] < 40) {
    		printf("FOUND a failing score! element %d score %d\n", i, scores[i]);
			break;
		}
    }
    printf("Outside of the loop now\n");
	printf("\n\n");



    char fav_letter = 'u';
	char response;
	printf("Guess my favorite letter to escape this infinite loop of boredom:\n");

	for ( ; ; ) {

		scanf(" %c", &response);

		if (response == 'u'){

			printf("u does happen to be my favorite!\n");

			break;
		}

		printf("BORED...zzzzz \n");
		
	}
    printf("Outside of the loop now - whew!\n");
    printf("\n\n");



    int num_guesses = 3, i = 0;
	int res;
    bool guessed_right = false;

	while (i < num_guesses) {

		printf("Enter a number divisible by 5 and 7: ");
		scanf("%d", &res);

		if ((res % 5 == 0) && (res % 7 == 0)) {
            guessed_right = true;   
            break;
		}
		else {
			printf("Try again...\n");
			i++;
		}

	}

    if (guessed_right) {
        printf("You are right %d is divisible by 5 and 7!\n", res);
    } else {
        printf("I'm afraid, you have run out of guesses\n");
    }
    printf("\n\n");



    int num; 
    do {
	    printf("Please enter a positive number to compute its cube (-1 to exit): ");
	    scanf("%d", &num);

        if (num == -1) {
            break;
        }

	    printf("You entered %d, its cube is %d\n", num, num * num * num);

    } while (1);
    printf("Value of num at the end of the loop  %d\n", num);

    return EXIT_SUCCESS;
}
