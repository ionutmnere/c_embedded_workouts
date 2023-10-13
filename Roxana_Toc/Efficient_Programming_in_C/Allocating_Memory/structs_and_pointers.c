# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main() 
{
    struct Student {
        int* id;
        char* name;
        float* math_score;
        float* english_score;
    };

    struct Student student;

    student.id = (int *)malloc(sizeof(int));
    student.name = (char *)calloc(20, sizeof(char));
    student.math_score = (float *)malloc(sizeof(float));
    student.english_score = (float *)malloc(sizeof(float));

    *student.id = 111;
    strcpy(student.name, "Janice");
    *student.math_score = 67.78;
    *student.english_score = 64.23;

    printf("Student id: %d\n", *student.id);
    printf("Student name: %s\n", student.name);
    printf("Student math: %.2f\n", *student.math_score);
    printf("Student english: %.2f\n\n", *student.english_score);




    struct Student* student_ptr = (struct Student*)malloc(sizeof(struct Student));

    student_ptr->id = (int *)malloc(sizeof(int));
    student_ptr->name = (char *)calloc(20, sizeof(char));
    student_ptr->math_score = (float *)malloc(sizeof(float));
    student_ptr->english_score = (float *)malloc(sizeof(float));

    *student_ptr->id = 111;
    strcpy(student_ptr->name, "Janice");
    *student_ptr->math_score = 67.78;
    *student_ptr->english_score = 64.23;

    printf("Student id: %d\n", *student_ptr->id);
    printf("Student name: %s\n", student_ptr->name);
    printf("Student math: %.2f\n", *student_ptr->math_score);
    printf("Student english: %.2f\n\n", *student_ptr->english_score);

    free(student_ptr->id);
    free(student_ptr->name);
    free(student_ptr->math_score);
    free(student_ptr->english_score);

    return EXIT_SUCCESS;
}
