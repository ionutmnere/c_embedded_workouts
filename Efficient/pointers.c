# include <stdlib. h>
# include <stdio. h>
int main()
{
    int num = 33;
    int *num_ptr = &num;
    printf("Address of num is: sp \n", &num);
    printf("Address stored in num_ptr: sp \n", num_ptr);
    printf("Value pointed to by num_ptr is: 8d \n", *num_ptr);

    printf("\n");

    printf("-------UPDATE VALUE------\n");

    *num_ptr = *num_ptr * 100;
    printf("Address of num is (no change): sp \n", &num);
    printf("Address stored in num ptr (no change): Sp \n", num_ptr);
    printf("Updated value pointed to by num_ptr is: sd \n", *num_ptr);

    printf ("\n");
    
    return EXIT_SUCCESS;
}