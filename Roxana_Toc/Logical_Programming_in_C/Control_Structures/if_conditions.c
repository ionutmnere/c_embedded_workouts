# include <stdlib.h>
# include <stdio.h>

int main() 
{
    if (0) {
        printf("The condition if (0) evaluates to true\n");
    }

    if (1) {
        printf("The condition if (1) evaluates to true\n");
    }


    printf("\n\n");


    int num_1 = 10;
    int num_2 = 111;

    if (num_1 == num_2) {
        printf("num_1 equal to num_2\n");
    }

    if (num_1 != num_2) {
        printf("num_1 not equal to num_2\n");
    }

    if (num_1 > num_2) {
        printf("num_1 greater than num_2\n");
    }

    if (num_1 < num_2) {
        printf("num_1 less than num_2\n");
    }

    if (num_1 >= num_2) {
        printf("num_1 greater than or equal to num_2\n");
    }

    if (num_1 <= num_2) {
        printf("num_1 less than or equal to num_2\n");
    }


    printf("\n\n");


    if((num_1 > 10) && (num_2 > 10)) {
        printf("(num_1 > 10) && (num_2 > 10) is true\n");
    }

    if ((num_1 > 10) || (num_2 > 10)) {
        printf("(num_1 > 10) || (num_2 > 10) is true\n");
    }

    if (!(num_1 > 10)) {
        printf("!(num_1 > 10) is true\n");
    }


    return EXIT_SUCCESS;
}