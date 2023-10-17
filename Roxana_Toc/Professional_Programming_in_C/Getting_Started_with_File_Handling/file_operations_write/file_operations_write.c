# include <stdlib.h>
# include <stdio.h>

int main() 
{
    // FILE *file_ptr = fopen("./quotes_file.txt", "a");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // char quote[] = "Love the life you live. Live the life you love. \n -Bob Marley\n";
    
    // for (int i = 0; quote[i] != '\0'; i++) {
    //     fputc(quote[i], file_ptr);
    // }

    // fclose(file_ptr);





    // FILE *file_ptr = fopen("./quotes_file.txt", "r+");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // char data_buffer[1048];
    // while(fgets(data_buffer, 1048, file_ptr) != NULL) {
    //   printf("%s" , data_buffer);

    //   fflush(stdout);
    // }

    // fputs("I find that the harder I work, the more luck I seem to have. \n-Thomas Jefferson\n", file_ptr);
    // fputs("I never dreamed about success, I worked for it. \n-Estee Lauder\n", file_ptr);

    // fclose(file_ptr);





    FILE *file_ptr = fopen("./employee_details.csv", "w");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    const int num_records = 3;

    char name[num_records][15] = {"Alvin Johnson", "Deola Vas", "Kevin Wilson"};
    char department[num_records][15] = {"Production", "Sales", "Marketing"};
    char id[num_records][15] = {"EPRO2109", "ESAL1901", "EMAR1721"};
    int age[num_records] = {25, 31, 29};

    fprintf(file_ptr,"ID, Name, Department, Age\n");

    for(int i = 0; i < num_records; i++) {
        fprintf(file_ptr,"%s, %s, %s, %d\n", id[i], name[i], department[i], age[i]);
    }

    fclose(file_ptr);
      

      
    return EXIT_SUCCESS;
}
