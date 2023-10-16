#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define BUFFER_SIZE 1048
void read_file_using_getc(FILE *file)
{
    fseek(file, 0, SEEK_SET);
    char ch = fgetc(file);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(file);
    }
    printf("\n");
    if (feof(file))
    {
        printf(">The file was completed read\n");
    }
    else
    {
        printf(">Something went wrong while reading the file\n");
    }
}

void read_file_using_buffer(FILE *file)
{
    fseek(file, 0, SEEK_SET);
    char buffer[BUFFER_SIZE];

    while (fgets(buffer, BUFFER_SIZE, file) != NULL)
    {
        printf("%s", buffer);
        fflush(stdout);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Invalid number of arguments\n");
        return EXIT_FAILURE;
    }
    // in atgv[1] - name of the file
    FILE *file = fopen(argv[1], "r");

    if (file == NULL)
    {
        printf("Could not open the file :%s\n", strerror(errno));
        return EXIT_FAILURE;
    }

    read_file_using_getc(file);
    read_file_using_buffer(file);

    fclose(file);

    return EXIT_SUCCESS;
}