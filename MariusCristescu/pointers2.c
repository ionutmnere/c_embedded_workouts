#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[4] = {1,2,3,4};
    printf("%p\n", arr);
    printf("%p\n", arr+1);
    printf("%p\n", arr+2);
    printf("%p\n", arr+3);
    return EXIT_SUCCESS;

}