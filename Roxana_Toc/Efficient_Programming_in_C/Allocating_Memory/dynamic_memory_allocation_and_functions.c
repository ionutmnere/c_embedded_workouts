# include <stdlib.h>
# include <stdio.h>

char* get_grades(int* scores, int length) {
    char* grades = (char *)malloc(length * sizeof(char));

    for (int i = 0; i < length; i++) {
        int score = *(scores + i);

        if (score >= 90) {
          *(grades + i) = 'A';
        } else if (score >= 70) {
          *(grades + i) = 'B';
        } else if (score >= 50) {
          *(grades + i) = 'C';
        } else if (score >= 30) {
          *(grades + i) = 'D';
        }
    }

    return grades;
}

int main() 
{
    int student_scores[] = {98, 75, 85, 69, 35, 55};

    char* grades = get_grades(student_scores, 6);

    for (int i = 0; i < 6; i++) {
        printf("Student grade for score %d = %c\n", *(student_scores + i), *(grades + i));
    }

    free(grades);

    return EXIT_SUCCESS;

}
