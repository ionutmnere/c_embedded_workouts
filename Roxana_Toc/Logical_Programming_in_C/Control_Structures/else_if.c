# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int score;

    printf("Please enter your total score out of 100: ");
    scanf("%d", &score);

    if (score > 90) {
        printf("Score %d, your grade for this term is %c\n", score, 'A');
    } else if (score > 70) {
        printf("Score %d, your grade for this term is %c\n", score, 'B');
    } else if (score > 50) {
        printf("Score %d, your grade for this term is %c\n", score, 'C');
    } else if (score > 40) {
        printf("Score %d, your grade for this term is %c\n", score, 'D');
    } else {
        printf("Score %d, your grade for this term is %c\n", score, 'F');
    }


    printf("\n\n");


    char grade = 'F';
    if (score > 90) {
        grade = 'A';
    } else if (score > 70) {
        grade = 'B';
    } else if (score > 50) {
        grade = 'C';
    } else if (score > 40) {
        grade = 'D';
    }
    
    printf("Score %d, your grade for this term is %c\n\n", score, grade);

    return EXIT_SUCCESS;
}