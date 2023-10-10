#include <stdio.h>
#include <stdlib.h>

int main () {
	int one_score;
	int scores[3];

	printf("size of integer is: %lu\n", sizeof(one_score));
	printf("size of integer array is: %lu\n", sizeof(scores));

	one_score = 67;

	scores[0]=23;
	scores[1]=44;
	scores[2]=88;

	printf("one score: %d\n\n",one_score);

	printf("score[0]: %d\n", scores[0]);
	printf("score[1]: %d\n", scores[1]);
	printf("score[2]: %d\n", scores[2]);

	int arrayOfElements[] = {23,24,25,26,27};

	for(int i=0;i<=4;i++){
		printf("arrayOfElements->%d\n",arrayOfElements[i]);
	}

	printf("---------\n");

	char char_array[] = {'B','l','u','e'};
	for(int i=0;i<=sizeof(char_array)/sizeof(char_array[0]);i++){
		printf("character->%c\n",char_array[i]);
	}
	printf("%s\n",char_array);


 	printf("\n\n");
    int marks[2][4];
    
    printf("size of array is: %lu\n\n", sizeof(marks));

    marks[0][0] = 28;
    marks[0][1] = 77;
    marks[0][2] = 34;
    marks[0][3] = 20;

    marks[1][0] = 71;
    marks[1][1] = 48;
    marks[1][2] = 31;
    marks[1][3] = 89;

    printf("student 1 marks in math: %d\n", marks[0][0]);
    printf("student 1 marks in english: %d\n", marks[0][1]);
    printf("student 1 marks in history: %d\n", marks[0][2]);
    printf("student 1 marks in physics: %d\n", marks[0][3]);
    printf("\n");

    printf("student 2 marks in math: %d\n", marks[1][0]);
    printf("student 2 marks in english: %d\n", marks[1][1]);
    printf("student 2 marks in history: %d\n", marks[1][2]);
    printf("student 2 marks in physics: %d\n", marks[1][3]);
    printf("\n");
    return EXIT_SUCCESS;


	return EXIT_SUCCESS;
}