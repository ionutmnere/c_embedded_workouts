# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int num_1 = 90;
    int num_2 = 90;

    printf("pre-increment num_1: %d\n", num_1);

    int result_1 = num_1++; 

    printf("post-increment num_1: %d\n", num_1);
    printf("result_1: %d\n\n", result_1);

    printf("pre-increment num_2: %d\n", num_2);

    int result_2 = ++num_2; 

    printf("post-increment num_2: %d\n", num_2);
    printf("result_2: %d\n\n", result_2);


    printf("\n\n");


    int number_1 = 90;
    int number_2 = 90;

    printf("original number_1: %d\n", number_1);
    number_1++; 
    printf("updated number_1: %d\n", number_1);

    printf("original number_2: %d\n", number_2);
    ++number_2; 
    printf("updated number_2: %d\n", number_2);


    printf("\n\n");


    int num_3 = 90;
    int num_4 = 90;

    printf("original num_3: %d\n", num_3);
    int res1 = num_3++; 
    printf("updated num_3: %d\n", num_3);
    printf("result_1: %d\n\n", res1);

    printf("original num_4: %d\n", num_4);
    int res2 = ++num_4; 
    printf("updated num_4: %d\n", num_4);
    printf("result_2: %d\n\n", res2);

    return EXIT_SUCCESS;
}