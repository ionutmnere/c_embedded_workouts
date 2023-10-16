#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arithmetic.h"

#define SEPARATORS " ,!."
#define CASE_SENZITIVE 0

void compare_strings(char *a, char *b)
{
#if CASE_SENZITIVE == 0
    if (strcmp(a, b) > 0)
        printf("The first string (%s) is the longest\n", a);
    else if (strcmp(a, b) == 0)
        printf("Same length\n");
    else
        printf("The second string (%s) is the longest\n", b);
#else
    if (strcasecmp(a, b) > 0)
        printf("The first string (%s) is the longest\n", a);
    else if (strcasecmp(a, b) == 0)
        printf("Same length\n");
    else
        printf("The second string (%s) is the longest\n", b);
#endif
}

void tokenize(char *s)
{
    char *current_word = strtok(s, SEPARATORS);
    int crrt_idx = 0;
    while (current_word != NULL)
    {
        printf("Word %d : %s\n", ++crrt_idx, current_word);
        current_word = strtok(NULL, SEPARATORS);
    }
}

int main(int argc, char **argv)
{

    char s1[] = "Ana are mere!";
    char s2[] = "Ene are pere";

    char *s1_ptr = (char *)malloc((strlen(s1) + 1) * sizeof(char));
    char *s2_ptr = (char *)malloc((strlen(s2) + 1) * sizeof(char));
    char *s3_ptr = (char *)calloc(strlen(s2) + strlen(s1) + 2, sizeof(char));

    strcpy(s1_ptr, s1);
    strcpy(s2_ptr, s2);

    printf("s1=%s; s1_ptr=%s\ns2=%s; s2_ptr=%s\n", s1, s1_ptr, s2, s2_ptr);
    strcat(s3_ptr, s1);
    strcat(s3_ptr, " ");
    strcat(s3_ptr, s2);
    printf("s3 = %s\n", s3_ptr);
    int comparator = strcmp(s1, s2);
    printf("Comparator %d\n", comparator);
    compare_strings(s1, s2);

    if (argc > 1)
    {
        tokenize(argv[1]);
    }

    printf("%f = %f + %f\n", add(1.2, 1.3), 1.2,1.3);

    free(s1_ptr);
    free(s2_ptr);
    free(s3_ptr);

    return EXIT_SUCCESS;
}