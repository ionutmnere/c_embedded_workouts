# include <stdlib.h>
# include <stdio.h>

void greet_by_name(char name[]) 
{
    printf("Good morning, %s", name);
}

float add(float, float);

float subtract(float, float);

float multiply(float, float);

float divide(float, float);


int main() 
{
    char name[50];    
    fputs("What is your name? ", stdout);
    fgets(name, 50, stdin);

    greet_by_name(name);
    printf("\n\n");



    char operator;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("\nEnter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
          printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
          break;
        case '-':
          printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
          break;
        case '*':
          printf("%.2f * %.2f = %.2f", num1, num2, multiply(num1, num2));
          break;
        case '/':
          printf("%.2f / %.2f = %.2f", num1, num2, divide(num1, num2));
          break;
        default:
          printf("Please enter a valid operator.\n");
    }

    return EXIT_SUCCESS;
}


float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
