#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int number;

	printf("Please enter a number to print out its multiplication tables: ");
	scanf("%d", &number);

	goto multiplication_tables;

	printf("This code here will NOT be executed!\n");

	multiplication_tables:
	for(int i = 1; i<=10; i++){
		printf("%d x %d = %d\n",number, i , number*i );
	}


	return EXIT_SUCCESS;
}