#include <stdlib.h>
#include <stdio.h>

#define DEBUG 2

float perform_complex_computation(float a, float b, float c, float d) {
    float result_1 = a + b * b;
    float result_2 = c - 5 * d;

    float result_3 = result_1 / result_2;

    #if DEBUG == 1
        printf("result_1: %.2f\n", result_1);
        printf("result_2: %.2f\n", result_2);
        printf("result_3: %.2f\n", result_3);
    #elif DEBUG == 2
        printf("result_3: %.2f\n", result_3);
    #endif

    return result_3 * result_3;
}

#define ADD(x, y) x + y 

void perform_add(float a, float b) {

    #ifdef ADD
        printf("Sum = %.2f\n", ADD(a, b));
    #endif

    #ifndef ADD
        printf("ADD macro not defined\n");
    #endif
}


int main() 
{
    float a = 5.6, b = 11.2, c = 23.4, d = 3.7;

    printf("Complex computation result: %.2f\n", perform_complex_computation(a, b, c, d));
    printf("\n\n");
    
    
    
    printf("Performing first add\n");
    perform_add(5.6, 2.1);

    printf("\nPerforming second add\n");
    perform_add(10.3, 7.9);

    return EXIT_SUCCESS;
}

