#include <stdlib.h>
#include <stdio.h>

int main(){
	for (int index = 0; index<1;index++){
		printf("Hello from number %d\n",index);
	}

	int newNumber;

	for(newNumber = -3; newNumber<=-2;newNumber++){
		printf("%d -> ",newNumber);
	}

	float lap_timings[] = {12.3, 12.4, 15.7 ,12.5, 18.2, 9.9};

	size_t lap_length = sizeof(lap_timings)/ sizeof(lap_timings[0]);

	for(int i = 0; i<lap_length;i++){
		printf("Element %d of the array lap_timings is: %.2f\n",i,lap_timings[i] );
	}

	char name[12] = "Adam Smith";

	size_t name_length = sizeof(name) / sizeof(name[0]);

	printf("Length of char array: %zu\n\n", name_length);

	for (int i=0;i<name_length;i++){
		printf("%c|",name[i]);
	}
	printf("\n\n");



	return EXIT_SUCCESS;
}