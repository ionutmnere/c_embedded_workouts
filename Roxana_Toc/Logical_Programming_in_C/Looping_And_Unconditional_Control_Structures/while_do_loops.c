# include <stdlib.h>
# include <stdio.h>

int main() 
{
	int i = 0;
	while(i < 6) {

		printf("This is loop %d \n", i);

		i++;

	}
  	printf("Value of i at the end of the loop  %d\n", i);
  	printf("\n\n");



  	int j = 2;
	while(j < 1000 && j > 1) {

		printf("Value of j is %d \n", j);

    	j = j * j;
	}
  	printf("Value of j at the end of the loop  %d\n", j);
  	printf("\n\n");



  	int scores[] = {45, 57, 68, 23, 89, 72, 34, 85};
    int k = 0;
    size_t scores_len = sizeof(scores) / sizeof(scores[0]);

  	while(k < scores_len) {

        if (scores[k] > 50) {
          
            printf("Found a score > 50: %d\n", scores[k]);
        }

        k++;
  	}
    printf("Value of k at the end of the loop  %d\n", k);
	printf("\n\n");



    int num = 0;
	while (num != -1) {
	    printf("Please enter a positive number to compute its square (-1 to exit): ");
	    scanf("%d", &num);

	    printf("You entered %d, its square is %d\n", num, num * num);
	}

  	printf("Value of num at the end of the loop  %d\n", num);

  	return EXIT_SUCCESS;
}
