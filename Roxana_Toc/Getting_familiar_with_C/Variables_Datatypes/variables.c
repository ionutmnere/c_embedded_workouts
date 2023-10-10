# include <stdlib.h>
# include <stdio.h>

int main() 
{

    int income = 100000;
    int expenses = 67000;
    
    printf("Initial income: %d \n", income);    
    printf("Initial expenses: %d \n", expenses);    

    printf("Updating variables\n\n");

    income = 110000;
    expenses = 75000;
    
    printf("Updated income: %d \n", income);    
    printf("Updated expenses: %d \n", expenses);   
    printf("\n\n");


    float income2 = 1.24e5;
    float expenses2 = 4.5e4;
    float bank_balance = -10.5E-2;
    
    printf("Initial income: %f \n", income2); 
    printf("Initial expenses: %f \n", expenses2);    
    printf("Initial bank balance: %f \n", bank_balance);  
    printf("\n\n");


    char letter = 'Q';
    char ascii_char = 66;
    
    printf("Letter: %c \n", letter);  
    printf("ASCII character: %c \n", ascii_char);
    printf("\n\n");


    return EXIT_SUCCESS;
}