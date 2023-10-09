# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int day, month, year;

    printf("Please enter your birth date in this format d/m/y:\n");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Your birthday is on %d/%d/%d\n", day, month, year);

    return EXIT_SUCCESS;
}