#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
int main(int argc, char **argv)
{
    // rand number
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int rand_nb = rand();
        if (rand_nb % 2 == 0)
        {
            printf("The number %d is even\n");
        }
        else
        {
            printf("The number %d is odd\n");
        }
    }

    // utility functions
    float a = 9.23;
    float a_ceil = ceil(a);
    printf("Ceil of %f is %f\n", a, a_ceil);

    return EXIT_SUCCESS;
}