#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void switchNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int v[], int size)
{

    bool isNotFinished = false;
    int nbOfIterations = size - 1;

    do
    {
        isNotFinished = false;
        for (int i = 0; i < nbOfIterations; i++)
        {
            if (v[i] > v[i + 1])
            {
                isNotFinished = true;
                switchNumbers(v + i, v + i + 1);
            }
        }
        --nbOfIterations;
    } while (isNotFinished);
}
void print_vector(int v[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}
int main(int argc, char **argv)
{
    int size = argc - 1;
    int *my_vector = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        my_vector[i] = atoi(argv[i+1]);
    }
    printf("Given array: ");
    print_vector(my_vector, size);
    sort_array(my_vector, size);
    printf("Sorted array: ");
    print_vector(my_vector, size);
    free(my_vector);
    return 0;
}