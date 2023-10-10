# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int number;

    printf("Please enter a number to print out its multiplication tables (-1 to exit): ");
    scanf("%d", &number);

    goto multiplication_tables;

    printf("This code here will NOT be executed!\n");

    multiplication_tables:
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    printf("Please enter another number (-1 to exit): ");
    scanf("%d", &number);

    if (number == -1) {
        return EXIT_SUCCESS;
    }

    goto multiplication_tables;

}
