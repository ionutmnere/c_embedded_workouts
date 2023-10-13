# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main() 
{
    struct Student {
        int id;
        char name[20];
        float math_score;
        float english_score;
    };

    struct Student student_1;
    struct Student student_2;

    student_1.id = 111;
    strcpy(student_1.name, "Janice");
    student_1.math_score = 67.78;
    student_1.english_score = 64.23;

    printf("Student 1 id: %d\n", student_1.id);
    printf("Student 1 name: %s\n", student_1.name);
    printf("Student 1 math: %.2f\n", student_1.math_score);
    printf("Student 1 english: %.2f\n\n", student_1.english_score);

    student_2.id = 222;
    strcpy(student_2.name, "Joseph");
    student_2.math_score = 55.23;
    student_2.english_score = 89.11;

    printf("Student 2 id: %d\n", student_2.id);
    printf("Student 2 name: %s\n", student_2.name);
    printf("Student 2 math: %.2f\n", student_2.math_score);
    printf("Student 2 english: %.2f\n\n", student_2.english_score);


    union Score {
        short marks;
        float gpa;
    };

    union Score score_1;

    score_1.gpa = 4.66;

    printf("Score.marks: %d\n", score_1.marks);
    printf("Score.gpa: %f\n", score_1.gpa);

    return EXIT_SUCCESS;
}