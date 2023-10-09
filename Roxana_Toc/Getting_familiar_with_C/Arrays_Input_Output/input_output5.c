# include <stdlib.h>
# include <stdio.h>

int main() 
{
    char name[10];
    char city[12];
    
    puts("What is your name?");
    gets(name);

    puts("Where do you live?");
    gets(city);

    puts("Welcome");
    printf("Hello %s from %s!\n", name, city);

    return EXIT_SUCCESS;
}