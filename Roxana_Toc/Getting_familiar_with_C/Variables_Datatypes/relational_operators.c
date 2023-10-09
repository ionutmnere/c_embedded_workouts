# include <stdlib.h>
# include <stdio.h>
# include <math.h>

int main() 
{
    int num_1 = 63;
    int num_2 = 22;
    int res;

    res = num_1 == num_2;
    printf("num_1 equal to num_2?: %d\n", res);

    res = num_1 != num_2;
    printf("num_1 not equal to num_2?: %d\n", res);

    res = num_1 > num_2;
    printf("num_1 greater than num_2?: %d\n", res);

    res = num_1 < num_2;
    printf("num_1 less than num_2?: %d\n", res);

    res = num_1 >= num_2;
    printf("num_1 greater than or equal to num_2?: %d\n", res);

    res = num_1 <= num_2;
    printf("num_1 less than or equal to num_2?: %d\n", res);

    printf("\n\n");

    int var1 = 100;
    int var2 = 1000;
    int result;

    result = var1 == var2;

    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);
    printf("var1 equal to var2?: %d\n", result);

    printf("\n\n");

    float number_1 = 100.245;
    double number_2 = 100.245;
    int rez;

    rez = fabs(number_1 - number_2) < 1e-4;

    printf("number_1: %f\n", number_1);
    printf("number_2: %lf\n", number_2);
    printf("number_1 equal to number_2?: %d\n", rez);

    return EXIT_SUCCESS;
}