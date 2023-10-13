# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int number_array[] = {100, 200, 300, 400, 500};

    int *arr_ptr = number_array;

    printf("Value in number_array[0] using array: %d\n", number_array[0]);
    printf("Value in number_array[0] using pointer: %d\n", *arr_ptr);

    printf("\nValue in number_array[1] using array: %d\n", number_array[1]);
    printf("Value in number_array[1] using pointer: %d\n", *(arr_ptr + 1));

    printf("\nValue in number_array[2] using array: %d\n", number_array[2]);
    printf("Value in number_array[2] using pointer: %d\n", *(arr_ptr + 2));
    printf("\n\n");



    int number_array2[] = {100, 200, 300, 400, 500};

    int *arr_ptr2 = number_array2;

    int size_of_array = sizeof(number_array2) / sizeof(int);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < size_of_array; i++) {
        printf("%p \t %d \n", arr_ptr2 + i, *(arr_ptr2 + i));
    }


    return EXIT_SUCCESS;
}
