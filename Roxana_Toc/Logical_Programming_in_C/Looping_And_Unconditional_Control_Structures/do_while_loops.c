# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int i = 0;
    do {

        printf("This is loop %d \n", i);

        i++;

    } while (i < 6);

    printf("Value of i at the end of the loop  %d\n", i);
    printf("\n\n");



    int a = 8;
    int b = 3;
    do {

        printf("a: %d, b: %d\n", a, b);

        a = a * 2;
        b = b * 3;

    } while (a < 100 && b < 1000);

    printf("a: %d, b: %d at the end of the loop\n", a, b);
    printf("\n\n");



    int scores[] = {45, 57, 68, 23, 89, 72, 34, 85};
    int j = 0;
    size_t scores_len = sizeof(scores) / sizeof(scores[0]);

    do {
        if (scores[j] < 60) {
            printf("Score under 60: %d\n", scores[j]);
        }

        j++;
    } while (j < scores_len);
    printf("\n\n");
    


    int num;
    do {
        printf("Please enter a positive number to compute its cube (-1 to exit): ");
        scanf("%d", &num);

        printf("You entered %d, its cube is %d\n", num, num * num * num);

    } while (num != -1);
    
    printf("Value of num at the end of the loop  %d\n", num);

    return EXIT_SUCCESS;
}

