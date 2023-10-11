#include <stdlib.h>
#include <stdio.h>

int main(){
	// if (0)
	// {
	// 	printf("The condition if (0) evaluets to true\n");
	// }

	// if (1)
	// {
	// 	printf("The condition if (1) evaluets to true\n");
	// }

	int num_1 = 11;
	int num_2 = 111;
	int res;

	if(num_2 == num_1){
		printf("num_1 equal to num_2? : %d\n\n", res);
	}

	if(num_1 > 10 && num_2 <112){
		printf("one is bigger and the other is lower\n");
	}

	if(!(num_1>100)){
		printf("!(num_1>100)\n");
	}

	if(num_2 = num_1){
		printf("num_1 is equal to num_2 \n\n");
	}

	int numbers[] = {5,11,15,23,25,50,9};

	for(int i = 1; i<sizeof(numbers)/sizeof(numbers[0]);i++){
		if(numbers[i]%5==0){
			printf("The number %d is multiple of 5\n", numbers[i]);
		}else{
			printf("The number %d it aint\n", numbers[i]);
		}
	}


	int response;
	printf("Hello, pick a country using the numbers below: \n");
	printf("1.China \n2.India \n3.Romania\n");
	// scanf("%d",&response);

	switch(response){
	case 1:
		printf("Say \"Ni hao\" for hello in Chinese \n");
		break;
	case 2:
		printf("Say \"Namaste\" for hello in Hindi \n");
		break;
	case 3:
		printf("Say \"Salut\" for hello in Romanian \n");
		break;
	default:
		printf("Wassup \n");
	}

	float first_num = 10.2;
	float second_num = 12.3;

	first_num > second_num ? printf("first is bigger\n") : printf("second is bigger\n");





	return EXIT_SUCCESS;
}