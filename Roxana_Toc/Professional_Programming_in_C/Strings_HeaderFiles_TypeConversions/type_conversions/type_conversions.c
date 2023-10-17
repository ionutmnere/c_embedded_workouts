# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int int_var = 10;
    float float_var = 985.65;

    printf("sizeof(int_var): %lu\n", sizeof(int_var));
    printf("sizeof(float_var): %lu\n", sizeof(float_var));

    printf("Implicit type conversion performed\n");

    long long_var = int_var;
    double double_var = int_var;

    printf("sizeof(long_var): %lu\n", sizeof(long_var));
    printf("sizeof(double_var): %lu\n", sizeof(double_var));
    printf("\n\n");




    short short_var = 25;
    int int_var2 = 10;
    float float_var2 = 985.65;

    printf("sizeof(short_var): %lu\n", sizeof(short_var));
    printf("sizeof(int_var): %lu\n", sizeof(int_var2));
    printf("sizeof(float_var): %lu\n", sizeof(float_var2));

    printf("Implicit type conversion performed\n");

    double double_result = short_var * int_var2 + float_var2;

    printf("sizeof(double_result): %lu\n", sizeof(double_result));
    printf("double_result: %.2lf\n", double_result);
    printf("\n\n");




    int num = 10;
    char ch = 'j'; /* ASCII value is 106 */ 

    printf("sizeof(num): %lu\n", sizeof(num));
    printf("sizeof(ch): %lu\n", sizeof(ch));

    printf("Implicit type conversion performed\n");

    float float_result = num + ch;

    printf("sizeof(float_result): %lu\n", sizeof(float_result));
    printf("float_result: %.2f\n", float_result);

    return EXIT_SUCCESS;
}
