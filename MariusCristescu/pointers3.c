#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int *student_ptr = (int*) malloc( 5* sizeof(int));


    student_ptr[0] =1;
    student_ptr[1] =1;
    student_ptr[2] =1;
    student_ptr[3] =1;
    student_ptr[] =1;

    printf("value pointer address = %p \n", some_ptr );
    printf("value another pointer address = %p \n", another_ptr);

    if (another_ptr!= NULL) {
        *another_ptr =100;
        printf("value another pointer1 address = %p \n", another_ptr);
        printf("value another pointer1 value = %d \n", *another_ptr);
    }

    free(another_ptr);
    printf("value another pointer2 address = %p \n", another_ptr);
    printf("value another pointer2 value = %d \n", *another_ptr);

    return EXIT_SUCCESS;

}