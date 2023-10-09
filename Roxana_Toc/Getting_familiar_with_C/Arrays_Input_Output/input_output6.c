# include <stdlib.h>
# include <stdio.h>

int main() 
{
    char name[10];
    char city[12];
    
    fputs("What is your name? ", stdout);
    fgets(name, 10, stdin);

    fputs("Where do you live? ", stdout);
    fgets(city, 12, stdin);

    fputs("Welcome\n", stdout);
    printf("Hello %s from %s!\n", name, city);

    return EXIT_SUCCESS;
}