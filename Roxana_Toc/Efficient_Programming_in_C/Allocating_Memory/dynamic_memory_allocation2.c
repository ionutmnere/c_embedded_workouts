# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int some_uninitialized_var;
    int *some_ptr = &some_uninitialized_var;

    int *another_ptr = (int *)malloc(sizeof(int));

    *some_ptr = 100;
    printf("some_ptr initialized\n");

    *another_ptr = 1000;
    printf("another_ptr initialized\n");

    printf("------------ADDRESS--------------- \n");
    printf("Address pointed to by some_ptr is: %p \n", some_ptr);    
    printf("Address pointed to by another_ptr is: %p \n", another_ptr); 

    printf("------------VALUE--------------- \n");
    printf("Value referenced by some_ptr: %d \n", *some_ptr);
    printf("Value referenced by another_ptr: %d \n", *another_ptr);

    return EXIT_SUCCESS;
}
