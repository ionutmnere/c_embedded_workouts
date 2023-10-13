# include <stdlib.h>
# include <stdio.h>

int main() 
{
    float num = 221.3;
    int *num_ptr = &num;
    float *another_ptr = num_ptr;

    printf("Value in num is: %f \n", num);
    printf("Value pointed to by num_ptr is: %d \n", *num_ptr);
    printf("Value pointed to by another_ptr is: %f \n", *another_ptr);
    printf("\n\n");



    char ch = 'A';
    int num2 = 45;
    float flt_num = 67.098;
    double dbl_num = 23.3232332;

    printf("Address of ch is: %p \n", &ch);
    printf("Address of num2 is: %p \n", &num2);
    printf("Address of flt_num is: %p \n", &flt_num);
    printf("Address of dbl_num is: %p \n", &dbl_num);
    printf("\n\n");



    int num3 = 45;
    int *num_ptr2 = &num3;

    printf("------------ADDRESS--------------- \n");
    printf("Address of num3 is: %p \n", &num3);
    printf("Value in num_ptr2 is: %p \n", num_ptr2);

    printf("------------VALUE--------------- \n");
    printf("Value in num3 is: %d \n", num3);
    printf("Value pointed to by num_ptr2 is: %d \n", *num_ptr2);
    printf("\n\n");




    int num4 = 33;
    int *num_pt = &num4;

    printf("Original value in num4 is: %d \n", num4);
    printf("Value pointed to by num_pt is: %d \n", *num_pt);

    printf("------------UPDATE VALUE--------------- \n");
    num4 = num4 * 100;

    printf("Updated value in num4 is: %d \n", num4);
    printf("Updated value pointed to by num_pt is: %d \n", *num_pt);
    printf("\n\n");



    int num5 = 221;
    int *num_ptr3 = &num5;
    int *another_ptr2 = num_ptr3;

    printf("------------ADDRESS--------------- \n");
    printf("Address of num5 is: %p \n", &num5);
    printf("Address stored in num_ptr3: %p \n", num_ptr3);
    printf("Address stored in another_ptr2: %p \n", another_ptr2);

    printf("\n");

    printf("------------VALUE--------------- \n");
    printf("Value in num5 is: %d \n", num5);
    printf("Value pointed to by num_ptr3 is: %d \n", *num_ptr3);
    printf("Value pointed to by another_ptr2 is: %d \n", *another_ptr2);


    return EXIT_SUCCESS;
}

