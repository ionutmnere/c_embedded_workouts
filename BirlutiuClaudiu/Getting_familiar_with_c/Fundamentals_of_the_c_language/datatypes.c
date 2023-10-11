#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>
int main(int argc, char **argv)
{
    float float_variable_1 = 10.11;
    float float_variable_2 = 20.22;
    short short_max = SHRT_MAX;
    printf("Printing the value of the first float variable: %d \n", argc);
    printf("Printing the value of the first short variable: %hd \n", short_max);

    int min_int = INT_MIN;
    printf("Min int %d\n", min_int);

    signed int min_int_signed = INT_MIN;
    printf("Min int %d\n", min_int_signed);

    unsigned short ushort_max = USHRT_MAX;
    printf("Max unsigned short %hu\n", ushort_max);

    double double_max = DBL_MAX;
    printf("MMax double %lf\n", double_max);

    char letter = 'C';
    char ascii_char = 66;
    printf("Letter %c ; Ascii %c\n ", letter, ascii_char);

    double x = 1.23;
    float y = 1.23;
    int comp = fabs(x - y) < 1e-4;
    printf("Comparator %d\n", comp);
    return EXIT_SUCCESS;
}