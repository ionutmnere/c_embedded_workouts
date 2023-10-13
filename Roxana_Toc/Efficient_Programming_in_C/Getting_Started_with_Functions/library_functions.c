# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <math.h>
# include <string.h>

int main() 
{
    char first_string[] = "12345";
    int first_integer = atoi(first_string);

    printf("We now have an integer: %d\n", first_integer);

    if (first_integer == 12345) {
        printf("We can perform integer comparisons!\n");
    }
    printf("\n\n");



    char second_string[] = "1234578902384";
    long first_long = atol(second_string);

    printf("We now have a long: %ld\n", first_long);

    if (first_long == 1234578902384) {
        printf("We can perform long comparisons!\n");
    }
    printf("\n\n");



    char third_string[] = "1234.5678";
    float first_float = atof(third_string);

    printf("We now have a float: %f\n", first_float);
    printf("Add 100 to the value: %f\n", first_float + 100);
    printf("\n\n");



    srand(time(NULL));    
    for (int i = 0; i < 10; i++) {
      int random_num = rand();

      if (random_num % 2 == 0) {
          printf("The random number: %d is even\n", random_num);
      } else {
          printf("The random number: %d is odd\n", random_num);
      }
    }
    printf("\n\n");



    // float var_1 = 6.4;
    // float ceil_var_1 = ceil(var_1);
    // printf("Original: %f, ceiling: %f\n", var_1, ceil_var_1);

    // float var_2 = 6.8;
    // float floor_var_2 = floor(var_2);
    // printf("Original: %f, floor %f\n", var_2, floor_var_2);

    // float round_var_1 = round(var_1);
    // float round_var_2 = round(var_2);

    // printf("Original: %f, round %f\n", var_1, round_var_1);
    // printf("Original: %f, round %f\n", var_2, round_var_2);




    // float var_1 = -15.234;
    // float var_2 = 25.658;
      
    // float abs_var_1 = fabs(var_1);
    // float abs_var_2 = fabs(var_2);

    // printf("Original = %f Absolute = %f\n", var_1, abs_var_1);
    // printf("Original = %f Absolute = %f\n\n", var_2, abs_var_2);

    // int var_3 = 5;
    // int var_4 = 4;
    // int var_5 = -2;
      
    // printf("%d to the power %d is = %lf\n", var_3, var_4, pow(var_3, var_4));
    // printf("%d to the power %d is = %lf\n\n", var_4, var_5, pow(var_4, var_5));

    // printf("Square root of %f is = %.2f\n", abs_var_1, sqrt(abs_var_1));
    // printf("Square root of %d is = %.2f\n\n", var_3, sqrt(var_3));

    // if (isnan(sqrt(-10))) {
    //   printf("Negative numbers don't have real square roots. \n");
    // }


    char full_name[] = "Deborah Summerhouse";
    int string_len = strlen(full_name);

    printf("The length of the string %s is %d\n", full_name, string_len);
    printf("\n\n");




    char full_name2[] = "Deborah Summerhouse";

    for (int i = 0; i < strlen(full_name2); i++) {
      printf("%c ", full_name2[i]);
    }

    return EXIT_SUCCESS;
}
