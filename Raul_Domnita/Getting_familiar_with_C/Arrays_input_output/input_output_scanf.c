# include <stdlib.h>
# include <stdio.h>

int main() 
{
    // int quantity;
    // float price;

    // printf("Enter the quantity you purchased:\n");
    // scanf("%d",&quantity);

    // printf("Enter the price you payed:\n");
    // scanf("%f",&price);

    // printf("----------\n");

    // printf("Your total bill amount is :%0.2f\n",price * quantity);

    int day, month, year;

    printf("Please enter your birth date in this format d/m/y:\n");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Your birthday is on %d/%d/%d\n", day, month, year);


    return EXIT_SUCCESS;
}