# include <stdlib.h>
# include <stdio.h>

int main() 
{
    float student_gpas[] = {4.0, 3.7, 3.2, 3.6, 3.9, 3.1};
    char student_grades[] = {'A', 'B', 'C', 'B', 'A', 'C'};

    float *student_gpa_ptr = student_gpas;
    char *student_grade_ptr = student_grades;

    printf("Student GPA at index 0 = %.2f\n", student_gpa_ptr[0]);
    printf("Student GPA at index 3 = %.2f\n", student_gpa_ptr[3]);

    printf("Student grade at index 0 = %c\n", student_grade_ptr[0]);
    printf("Student grade at index 3 = %c\n", student_grade_ptr[3]);
    printf("\n\n");



    int student_ages[] = {13, 14, 11, 10, 12, 11};
    int *student_age_ptr = student_ages;

    size_t len = sizeof(student_ages) / sizeof(int);

    for (int i = 0; i < len; i++) {
        printf("Student age at index %d = %d\n", i, student_age_ptr[i]);
    }

    return EXIT_SUCCESS;
}
