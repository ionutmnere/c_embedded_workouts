#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
int main()
{
    FILE *file_pointer = fopen("ceva2.txt", "r");
    char data_buffer[255];

    fgets(data_buffer, 255, file_pointer);
    printf("%s", data_buffer);

    fgets(data_buffer, 255, file_pointer);
    printf("%s\n", data_buffer);

    fseek(file_pointer, 0, SEEK_SET);

    fgets(data_buffer, 255, file_pointer);
    printf("%s", data_buffer);

    fflush(stdout);

    return EXIT_SUCCESS;
}