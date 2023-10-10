# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int num_1 = 90;
    int num_2 = 5;
    
    int result;

    result = num_1 + num_2;
    printf("Sum: %d\n", result);

    result = num_1 - num_2;
    printf("Difference: %d\n", result);

    result = num_1 * num_2;
    printf("Product: %d\n", result);

    result = num_1 / num_2;
    printf("Quotient: %d\n", result);

    result = num_1 % num_2;
    printf("Remainder: %d\n", result);

    printf("\n\n");

    float number_1 = 145.345;
    float number_2 = 10.111;

    float result2;

    result2 = number_1 + number_2;
    printf("Sum: %f\n", result2);

    result2 = number_1 - number_2;
    printf("Difference: %f\n", result2);

    result2 = number_1 * number_2;
    printf("Product: %f\n", result2);

    result2 = number_1 / number_2;
    printf("Quotient: %f\n", result2);

    printf("\n\n");

    float result3 = 10 + 20 + 3 * 4;
    printf("Result of 10 + 20 + 3 * 4: %.2f\n\n", result3);

    result3 = (10 + 20 + 3) * 4;
    printf("Result of (10 + 20 + 3) * 4: %.2f\n\n", result3);

    result3 = 10 - 20 + 3 * 4 / 2;
    printf("Result of 10 - 20 + 3 * 4 / 2: %.2f\n\n", result3);

    result3 = 10 - (20 + 3 * 4) / 2;
    printf("Result of 10 - (20 + 3 * 4) / 2: %.2f\n\n", result3);
    

    return EXIT_SUCCESS;
}