# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int one_score;
    int scores[3];

    printf("size of integer is: %lu\n", sizeof(one_score));
    printf("size of integer array is: %lu\n", sizeof(scores));

    printf("\n\n");

    float one_score2;
    float scores2[5];

    printf("size of float is: %lu\n", sizeof(one_score2));
    printf("size of float array is: %lu\n", sizeof(scores2));

    printf("\n\n");

    char one_char;
    char many_chars[20];

    printf("size of char is: %lu\n", sizeof(one_char));
    printf("size of char array is: %lu\n", sizeof(many_chars));

    printf("\n\n");

    int one_score3;
    int scores3[3];

    one_score3 = 67;

    scores3[0] = 23;
    scores3[1] = 44;
    scores3[2] = 66;

    printf("one_score3: %d\n\n", one_score3);

    printf("score3[0]: %d\n", scores3[0]);
    printf("score3[1]: %d\n", scores3[1]);
    printf("score3[2]: %d\n", scores3[2]);


    printf("\n\n");


    int array[] = {45, 56, 56, 98, 44};

    printf("array[0]: %d\n", array[0]);
    printf("array[1]: %d\n", array[1]);
    printf("array[2]: %d\n", array[2]);
    printf("array[3]: %d\n", array[3]);
    printf("array[4]: %d\n", array[4]);
    array[0] = 99;
    array[4] = 22;
    printf("\nUpdated array: \n");
    printf("array[0]: %d\n", array[0]);
    printf("array[1]: %d\n", array[1]);
    printf("array[2]: %d\n", array[2]);
    printf("array[3]: %d\n", array[3]);
    printf("array[4]: %d\n", array[4]);

    printf("\n\n");

    char char_array[] = {'B', 'l', 'u', 'e'};

    printf("char_array[0]: %c\n", char_array[0]);
    printf("char_array[1]: %c\n", char_array[1]);
    printf("char_array[2]: %c\n", char_array[2]);
    printf("char_array[3]: %c\n", char_array[3]);
    printf("char_array: %s\n", char_array);


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
}