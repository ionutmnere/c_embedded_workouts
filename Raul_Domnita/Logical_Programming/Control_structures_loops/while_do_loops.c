#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int i = 0 ;
	while(i<6){
		printf("i=%d is still smaller than 6\n",i);
		i++;
	}

	int j=0;

	do{
		printf("j is %d \n", j);
		j++;
	}while(j<6);


	return EXIT_SUCCESS;
}