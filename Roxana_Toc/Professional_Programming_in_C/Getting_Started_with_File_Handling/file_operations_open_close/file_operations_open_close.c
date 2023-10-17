# include <stdlib.h>
# include <stdio.h>
# include<errno.h> 
# include<string.h> 

int main() 
{
    // FILE* file_ptr = fopen("./non_existent_file.txt", "r");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened, error number: %d\n", errno);
    //     printf("Error opening file: %s\n", strerror(errno));
    // } else {
    //     printf("The file was opened successfully! %p\n", file_ptr);
    // }

    // fclose(file_ptr);




    // FILE* file = fopen("./existing_file.txt", "w");

    // if (file == NULL) {
    //     printf("The file could not be opened, error number: %d\n", errno);
    //     printf("Error opening file: %s\n", strerror(errno));
    // } else {
    //     printf("The file was opened successfully! %p\n", file);
    // }

    // fclose(file);




    // FILE* file_ptr = fopen("./existing_file.txt", "a");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened, error number: %d\n", errno);
    //     printf("Error opening file: %s\n", strerror(errno));
    // } else {
    //     printf("The file was opened successfully! %p\n", file_ptr);
    // }

    // fclose(file_ptr);




    FILE* file_ptr = fopen("./another_non_existent_file.txt", "a");

    if (file_ptr == NULL) {
        printf("The file could not be opened, error number: %d\n", errno);
        printf("Error opening file: %s\n", strerror(errno));
    } else {
        printf("The file was opened successfully! %p\n", file_ptr);
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}
