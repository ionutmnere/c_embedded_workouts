# include <stdlib.h>
# include <stdio.h>

float num_1;
float num_2;

void enter_values() {
    printf("Please enter a value for num_1: ");
    scanf("%f", &num_1);

    printf("Please enter a value for num_2: ");
    scanf("%f", &num_2);
}

void perform_arithmetic_operations() {

    printf("num_1 + num_2: %.2f\n", num_1 + num_2);
    printf("num_1 - num_2: %.2f\n", num_1 - num_2);
    printf("num_1 * num_2: %.2f\n", num_1 * num_2);
    printf("num_1 / num_2: %.2f\n", num_1 / num_2);
}

int main() 
{
    enter_values();

    perform_arithmetic_operations();

    printf("num_1 still accessible in main(): %.2f\n", num_1);
    printf("num_2 still accessible in main(): %.2f\n", num_2);
    printf("\n\n");



    {
        printf("This is a block within {}\n");

        char name[] = "Julie";

        printf("The 'name' variable is accessible in this block: %s\n", name);
    } 
    printf("\n\n");



    {
        int outer_var = 100;
        {
            int inner_var = 200;

            printf("(inner block) printing outer_var: %d \n", outer_var);
            printf("(inner block) printing inner_var: %d \n", inner_var);
        }
    }
    

    return EXIT_SUCCESS;
}
