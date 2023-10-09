#include <stdio.h>
#include <stdbool.h>


int isOdd(int num)
{
	return num % 2 ;
}  


int main()
{
	printf("hello world. let's start counting\n");
	for (int i = 1; i < 100; ++i)
	{
		printf("%d\n", i);
	}


	int isOddVal = isOdd(12);
	if (isOddVal) {
		printf("%s\n", "is odd");
	} else {
		printf("%s\n", "is not odd");
	}

	return 0;
}

