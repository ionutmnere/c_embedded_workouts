# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int some_var = 100;
    int *some_ptr = &some_var;

    int *another_ptr = (int *)malloc(sizeof(int));

    printf("Address stored in some_ptr: %p \n", some_ptr);
    printf("Address stored in another_ptr: %p \n", another_ptr);

    free(another_ptr);
    free(some_ptr);
    printf("\n\n");



    int some_uninitialized_var;
    int *some_ptr2 = &some_uninitialized_var;

    int *another_ptr2 = (int *)malloc(sizeof(int));;

    printf("------------ADDRESS--------------- \n");
    printf("Address pointed to by some_ptr is: %p \n", some_ptr2);    
    printf("Address pointed to by another_ptr is: %p \n", another_ptr2); 

    printf("------------VALUE--------------- \n");
    printf("Value referenced by some_ptr: %d \n", *some_ptr2);
    printf("Value referenced by another_ptr: %d \n", *another_ptr2);

    return EXIT_SUCCESS;
}
