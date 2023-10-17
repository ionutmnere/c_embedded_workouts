# include <stdlib.h>
# include <stdio.h>

int main() 
{
    // FILE *file_ptr = fopen("./existing_file.txt", "r");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // int ch = getc(file_ptr);

    // while (ch != EOF) {
    //   putchar('|');
    //   putchar(ch);

    //   ch = getc(file_ptr);
    // }
    
    // if (feof(file_ptr)) {
    //   printf("End of file reached, contents read successfully!\n");
    // }
    // else {
    //   printf("Something went wrong, end of file was not reached.");
    // }

    // fclose(file_ptr);





    // FILE *file_ptr = fopen("./existing_file.txt", "r");
    // char data_buffer[1048];

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }


    // while(fgets(data_buffer, 1048, file_ptr) != NULL) {
    //     // Note: This is to show that we read the file line by line
    //     // The '|' should be printed before every string we read in
    //     putchar('|');
    //     printf("%s" , data_buffer);

    //     fflush(stdout);
    // }
    
    // if (feof(file_ptr)) {
    //   printf("End of file reached, contents read successfully!\n");
    // }
    // else {
    //   printf("Something went wrong, end of file was not reached.");
    // }

    // fclose(file_ptr);





    // char name[20];
    // int age;
    // float salary;

    // FILE *file_ptr = fopen("./structured_file.txt", "r");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // while (fscanf(file_ptr, "%s %d %f\n", name, &age, &salary) != EOF) {
    //   putchar('|');
    //   printf("%s, %d, %f\n", name, age, salary);
    // }
    
    // if (feof(file_ptr)) {
    //   printf("End of file reached, contents read successfully!\n");
    // }
    // else {
    //   printf("Something went wrong, end of file was not reached.");
    // }

    // fclose(file_ptr);





    char id[15];
    char name[20];
    char department[15];
    int age;

    FILE *file_ptr = fopen("./employee_details.csv", "r");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    fscanf(file_ptr, "%*[^\n]\n");
    while (fscanf(file_ptr, "%[^,],%[^,],%[^,],%d\n", id, name, department, &age) != EOF) {
      putchar('|');
      printf("%s, %s, %s, %d\n", id, name, department, age);
    }
    
    if (feof(file_ptr)) {
      printf("End of file reached, contents read successfully!\n");
    }
    else {
      printf("Something went wrong, end of file was not reached.");
    }

    fclose(file_ptr);

    
      
    return EXIT_SUCCESS;
}

