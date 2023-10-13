# include <stdlib.h>
# include <stdio.h>

static float num_1;
static float num_2;

void enter_values() {
    printf("Please enter a value for num_1: ");
    scanf("%f", &num_1);

    printf("Please enter a value for num_2: ");
    scanf("%f", &num_2);
}

void increment_and_print_counter() {
  static int counter = 0;

  counter++;

  printf("Counter value is: %d\n", counter);
}

int main() 
{

    auto int num1;
    auto int num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("num1 + num2: %d\n", num1 + num2);
    printf("\n\n");



    enter_values();

    printf("num_1 + num_2: %.2f\n", num_1 + num_2);
    printf("num_1 - num_2: %.2f\n", num_1 - num_2);
    printf("num_1 * num_2: %.2f\n", num_1 * num_2);
    printf("num_1 / num_2: %.2f\n", num_1 / num_2);
    printf("\n\n");



    increment_and_print_counter();
    increment_and_print_counter();
    increment_and_print_counter();

    return EXIT_SUCCESS;
}
