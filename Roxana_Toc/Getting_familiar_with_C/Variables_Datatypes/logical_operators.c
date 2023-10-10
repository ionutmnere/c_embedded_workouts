# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int num_1 = 23;
    int num_2 = 78;

    int res = (num_1 > 10) && (num_2 > 10);
    printf("(num_1 > 10) && (num_2 > 10)? %d\n", res);

    res = (num_1 > 10) && (num_2 > 100);
    printf("(num_1 > 10) && (num_2 > 100)? %d\n", res);

    res = (num_1 > 100) && (num_2 > 10);
    printf("(num_1 > 100) && (num_2 > 10)? %d\n", res);

    res = (num_1 > 100) && (num_2 > 100);
    printf("(num_1 > 100) && (num_2 > 100)? %d\n", res);

    
    printf("\n\n");


    int num_3 = 23;
    int num_4 = 78;

    int res2 = (num_3 > 10) || (num_4 > 10);
    printf("(num_3 > 10) || (num_4 > 10)? %d\n", res2);

    res2 = (num_3 > 10) || (num_4 > 100);
    printf("(num_3 > 10) || (num_4 > 100)? %d\n", res2);

    res2 = (num_3 > 100) || (num_4 > 10);
    printf("(num_3 > 100) || (num_4 > 10)? %d\n", res2);

    res2 = (num_3 > 100) || (num_4 > 100);
    printf("(num_3 > 100) || (num_4 > 100)? %d\n", res2);

    
    printf("\n\n");


    int num_5 = 23;
    int num_6 = 78;

    int res3 = (num_5 > 10);
    printf("(num_5 > 10)? %d\n", res3);

    res3 = !(num_5 > 10);
    printf("!(num_5 > 10)? %d\n", res3);

    res3 = (num_5 > 10) && (num_6 > 10);
    printf("(num_5 > 10) && (num_6 > 10)? %d\n", res3);

    res3 = !((num_5 > 10) && (num_6 > 10));
    printf("!((num_5 > 10) && (num_6 > 10))? %d\n", res3);

    res3 = (num_5 > 100) || (num_6 > 100);
    printf("(num_5 > 100) || (num_6 > 100)? %d\n", res3);

    res3 = !((num_5 > 100) || (num_6 > 100));
    printf("!((num_5 > 100) || (num_6 > 100))? %d\n\n", res3);


    return EXIT_SUCCESS;
}