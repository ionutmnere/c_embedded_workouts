#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap_numbers(int *first_number, int *second_number)
{
    int temp = *first_number;
    *first_number = *second_number;
    *second_number = temp;
}

int do_parition(int *my_array, int low, int high)
{
    int range_size = high - low + 1;
    int rand_idx = rand() % range_size;
    swap_numbers(my_array + low + rand_idx, my_array + high);
    int pivot = my_array[high];

    int last_index_updated = low - 1;
    for (int crt_idx = low; crt_idx < high; crt_idx++)
    {
        if (*(my_array + crt_idx) < pivot)
        {
            last_index_updated++;
            swap_numbers(my_array + crt_idx, my_array + last_index_updated);
        }
    }
    swap_numbers(my_array + last_index_updated + 1, my_array + high);
    return last_index_updated + 1;
}

void quick_sort(int *my_array, int low, int high)
{
    if (low < high)
    {
        int part_idx = do_parition(my_array, low, high);
        quick_sort(my_array, low, part_idx - 1);
        quick_sort(my_array, part_idx + 1, high);
    }
}

void print_vector(int *v, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    srand(time(NULL));
    int size_of_array = argc - 1;
    int *my_array = (int *)malloc(size_of_array * sizeof(int));
    for (int i = 0; i < size_of_array; i++)
    {
        my_array[i] = atoi(argv[i + 1]);
    }
    printf("Initial vector: ");
    print_vector(my_array, size_of_array);
    quick_sort(my_array, 0, size_of_array - 1);
    printf("Sorted vector: ");
    print_vector(my_array, size_of_array);

    free(my_array);
    return EXIT_SUCCESS;
}