# include <stdlib.h>
# include <stdio.h>

int main() 
{
    // FILE *file_ptr = fopen("./quotes_file.txt", "r");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    // char data_buffer[1048];

    // while (fgets(data_buffer, 1048, file_ptr) != NULL) {
    //   printf("%s" , data_buffer);
    //   printf("Current position of file_ptr: %ld\n", ftell(file_ptr));
    // }

    // fclose(file_ptr);





    // FILE *file_ptr = fopen("./quotes_file.txt", "r");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }
    // char data_buffer[1048];

    // printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    // fgets(data_buffer, 1048, file_ptr);
    // printf("%s" , data_buffer);

    // printf("Current position of file_ptr: %ld\n", ftell(file_ptr));

    // printf("Seeking offset 4 from start...\n");
    // fseek(file_ptr, 4, SEEK_SET);

    // printf("Back to start position of file_ptr: %ld\n", ftell(file_ptr));

    // fgets(data_buffer, 1048, file_ptr);
    // printf("%s" , data_buffer);

    // fclose(file_ptr);





    // FILE *file_ptr = fopen("./quotes_file.txt", "r");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }
    // char data_buffer[1048];

    // printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    // fgets(data_buffer, 1048, file_ptr);
    // printf("%s" , data_buffer);

    // printf("Current position of file_ptr: %ld\n", ftell(file_ptr));

    // printf("Seeking offset 4 from current...\n");
    // fseek(file_ptr, 6, SEEK_CUR);

    // printf("Moved file_ptr forward 6 bytes: %ld\n", ftell(file_ptr));

    // fgets(data_buffer, 1048, file_ptr);
    // printf("%s" , data_buffer);

    // fclose(file_ptr);






    // FILE *file_ptr = fopen("./quotes_file.txt", "r");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }
    // char data_buffer[1048];

    // printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    // fgets(data_buffer, 1048, file_ptr);
    // printf("%s" , data_buffer);

    // printf("Current position of file_ptr: %ld\n", ftell(file_ptr));

    // printf("Seeking offset -18 from end...\n");
    // fseek(file_ptr, -18, SEEK_END);

    // printf("Moved file_ptr 18 bytes before the end: %ld\n", ftell(file_ptr));

    // fgets(data_buffer, 1048, file_ptr);
    // printf("%s" , data_buffer);

    // fclose(file_ptr);





    FILE *file_ptr = fopen("./quotes_file.txt", "r");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }
    char data_buffer[1048];

    printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    fgets(data_buffer, 1048, file_ptr);
    printf("%s" , data_buffer);

    printf("Current position of file_ptr: %ld\n", ftell(file_ptr));

    printf("Rewind file_ptr to the beginning...\n");
    rewind(file_ptr);

    printf("Rewound file_ptr to the beginning: %ld\n", ftell(file_ptr));

    fgets(data_buffer, 1048, file_ptr);
    printf("%s" , data_buffer);

    fclose(file_ptr);
    
    return EXIT_SUCCESS;
}
