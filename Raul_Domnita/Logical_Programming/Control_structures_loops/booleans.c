#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	bool some_value = true;

	if(some_value){
		printf("It is true %d\n", some_value);
	}else{
		printf("It is false %d\n", some_value);
	}

	int a = 13;
	int b = 15;

	bool aGreaterOrNah = a > b ? true : false; 
	printf("%d\n", aGreaterOrNah);

	return EXIT_SUCCESS;
}