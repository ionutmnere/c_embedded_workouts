#include <stdlib.h>
#include <stdio.h>

void greet_by_name (char name[]);

 int main()
{
	char name[50];

	fputs("What is your name? ", stdout);
	fgets(name, 50, stdin);

	greet_by_name(name);

	return EXIT_SUCCESS;
}

void greet_by_name(char name[]){
	printf("Good morning %s\n", name );
}