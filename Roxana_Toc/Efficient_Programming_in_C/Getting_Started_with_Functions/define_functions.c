# include <stdlib.h>
# include <stdio.h>


void hello_fn() 
{
  printf("Hello - how are you?\n");
}

void goodbye_fn() 
{
  printf("Goodbye - see you soon!\n");
}

void birthday_wish_fn() 
{
  printf("A very happy birthday to you!\n");
}

int compute_add() 
{
  int result = 100 + 1000;

  return result;
}

int compute_subtract() 
{
  int result = 100 - 1000;

  return result;
}

double compute_add2(double num_1, double num_2) 
{
  return num_1 + num_2;
}

double compute_subtract2(double num_1, double num_2) 
{
  return num_1 - num_2;
}

int main() 
{
    printf("BEFORE invoking the functions\n");

    birthday_wish_fn();
    goodbye_fn();
    hello_fn();

    printf("AFTER invoking the functions\n");
    printf("\n\n");


    int result_add = compute_add();
    printf("100 + 1000 = %d\n", result_add);

    int result_subtract = compute_subtract();
    printf("100 - 1000 = %d\n", result_subtract);
    printf("\n\n");



    double first_num, second_num;  
    printf("Enter the first number: ");
    scanf("%lf", &first_num);

    printf("Enter the second number: ");
    scanf("%lf", &second_num);

    double result_add2 = compute_add2(first_num, second_num);
    printf("%lf + %lf = %lf\n", first_num, second_num, result_add2);

    double result_subtract2 = compute_subtract2(first_num, second_num);
    printf("%lf - %lf = %lf\n", first_num, second_num, result_subtract2);


    return EXIT_SUCCESS;
}
