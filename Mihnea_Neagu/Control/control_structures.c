# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int response;

    printf("Hello, pick a country using the numbers below: \n");
    printf("1.China \n2.India \n3.Japan \n4.South Korea \nCountry? :");
    scanf("%d", &response);

    switch (response) {
        case 1:
            printf("Say \"Ni hao\" for hello in Chinese\n");
            break; 

        case 2:
            printf("Say \"Namaste\" for hello in Hindi\n");
            break; 
        case 3:
            printf("Say \"Konnichiwa\" for hello in Japanese\n");
            break; 

        case 4:
            printf("Say \"Annyeohghaseyo\" for hello in Korean\n");
            break; 

        default:
            printf("Sorry, it seems the language you are looking for is currently not available in our library yet.\n");
            break;

    }


    printf("\n\n");


    char operator;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Please enter a valid operator.");
    }


    return EXIT_SUCCESS;
}