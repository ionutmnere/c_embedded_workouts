# include <stdlib.h>
# include <stdio.h>

void print_array(int *, int);
void square_numbers(int *, int);

void increment_value(float*);

void swap(char *, char *);

int main() 
{
    int int_array[] = {1, 2, 3, 4};

    print_array(int_array, 4);

    square_numbers(int_array, 4);

    print_array(int_array, 4);
    printf("\n\n");




    float first_var = 3;
    float *first_var_ptr = &first_var;

    printf("Value BEFORE function call: %.2f\n", first_var);

    increment_value(first_var_ptr);

    printf("Value AFTER function call: %.2f\n", first_var);
    printf("\n\n");




    char first_char = 'X';
    char second_char = 'Q';

    printf("BEFORE swap first_char: %c and second_char: %c \n", 
            first_char, second_char);

    swap(&first_char, &second_char);

    printf("AFTER swap first_char: %c and second_char: %c \n", 
            first_char, second_char);



    return EXIT_SUCCESS;
}

void print_array(int *int_ptr, int length) {

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < length; i++) {
        printf("%p \t %d \n", int_ptr + i, *(int_ptr + i));
    }
}

void square_numbers(int *int_ptr, int length) {
    for (int i = 0; i < 4; i++, int_ptr++) {
      *int_ptr = (*int_ptr) * (*int_ptr);
    }
}

void increment_value(float *float_ptr) {

  *float_ptr = *float_ptr + 10;
  
  printf("Value IN function after increment: %.2f\n", *float_ptr);
}

void swap(char *char_ptr_1, char *char_ptr_2) {
    
    char temp;

    temp = *char_ptr_1;
    *char_ptr_1 = *char_ptr_2;
    *char_ptr_2 = temp;
}