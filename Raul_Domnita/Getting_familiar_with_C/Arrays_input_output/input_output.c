# include <stdlib.h>
# include <stdio.h>

int main() 
{
    printf("Let's print an integer: %d\n", 52);
    printf("Let's print a character: %c\n", 'H');
    printf("Let's print a string: %s\n", "Hello!");

    printf("\n");

    printf("Let's print a float: %f\n", 23.909);
    printf("Let's print a float truncated to 1 decimal point: %.1f\n", 23.909);

    printf("\n");

    printf("Let's print a double: %lf\n", 23.909e27);
    printf("Let's print a double truncated to 2 decimal points: %.2lf\n", 23.909e27);


    return EXIT_SUCCESS;
}