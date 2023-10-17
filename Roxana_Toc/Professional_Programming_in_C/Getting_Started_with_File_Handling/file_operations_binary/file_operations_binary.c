# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct {
    char name[20];
    char city[20];
    int age;
    float salary;
} Employee;


int main() 
{
    // FILE *file_ptr = fopen("./employee_details.bin", "wb");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // char name[20] = "James Darwin";
    // char city[10] = "Seattle";
    // int age = 29;
    // float salary = 123000.34;

    // fwrite(name, sizeof(char), 20, file_ptr);
    // fwrite(city, sizeof(char), 10, file_ptr);
    // fwrite(&age, sizeof(int), 1, file_ptr);
    // fwrite(&salary, sizeof(float), 1, file_ptr);

    // fclose(file_ptr);





    // FILE *file_ptr = fopen("./employee_details.bin", "rb");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // char name[20];
    // char city[10];
    // int age;
    // float salary;

    // fread(name, sizeof(char), 20, file_ptr);
    // fread(city, sizeof(char), 10, file_ptr);
    // fread(&age, sizeof(int), 1, file_ptr);
    // fread(&salary, sizeof(float), 1, file_ptr);

    // fclose(file_ptr);

    // printf("Name: %s\n", name);
    // printf("City: %s\n", city);
    // printf("Age: %d\n", age);
    // printf("Salary: %.2f\n", salary);





    // FILE *file_ptr = fopen("./employee_info.bin", "wb");

    // if (file_ptr == NULL) {
    //     printf("The file could not be opened\n");

    //     return EXIT_FAILURE;
    // }

    // Employee employee;

    // strcpy(employee.name, "Nancy");
    // strcpy(employee.city, "Los Angeles");
    // employee.age = 34;
    // employee.salary = 123400.45;

    // fwrite(&employee, sizeof(Employee), 1, file_ptr);

    // fclose(file_ptr);





    FILE *file_ptr = fopen("./employee_info.bin", "rb");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    Employee employee;

    fread(&employee, sizeof(Employee), 1, file_ptr);

    fclose(file_ptr);

    printf("Name: %s\n", employee.name);
    printf("City: %s\n", employee.city);
    printf("Age: %d\n", employee.age);
    printf("Salary: %.2f\n", employee.salary);

    
    
    return EXIT_SUCCESS;
}