# include <stdlib.h>
# include <stdio.h>

float num_1 = 10.3;
float num_2 = 20.5;

void other_function();

int main() 
{
    printf("Global variable num_1: %.2f\n", num_1);
    printf("Global variable num_2: %.2f\n", num_2);

    int num_1 = 100; 
    int num_2 = 200;

    printf("Redefined variable num_1: %d\n", num_1);
    printf("Redefined variable num_2: %d\n", num_2);

    other_function();
    printf("\n\n");



    float main_var = 10.5;
    {
        printf("main_var (defined in main()): %.2f\n", main_var);

        float main_var = 111.1;

        printf("Redefined variable main_var_1: %.2f\n", main_var);
    }

    printf("Original definition in main() main_var_1: %.2f\n", main_var);
}

void other_function() {

    printf("Global variable num_1 (in other_function()): %.2f\n", num_1);
    printf("Global variable num_2 (in other_function()): %.2f\n", num_2);
}