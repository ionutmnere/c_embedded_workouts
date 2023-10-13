# include <stdlib.h>
# include <stdio.h>

void increment_value(float);

void print_array(int lap_times[], int len);

void update_array(int lap_times[]);

void update_string(char name[]);

int main() 
{
    float first_var = 3;

    printf("Value BEFORE function call: %.2f\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %.2f\n", first_var);
    printf("\n\n");




    int lap_times[] = {10, 11, 13, 9, 12, 14};

    printf("Value BEFORE update function call");
    print_array(lap_times, 6);

    update_array(lap_times);

    printf("Value AFTER update function call\n");
    print_array(lap_times, 6);
    printf("\n\n");




    char full_name[] = "Jacob Astor";

    printf("Value BEFORE update function call: %s", full_name);

    update_string(full_name);

    printf("\nValue AFTER update function call: %s\n", full_name);

    return EXIT_SUCCESS;
}


void increment_value(float first_var) {

  first_var = first_var + 10;
  
  printf("Value IN function after increment: %.2f\n", first_var);
}

void print_array(int lap_times[], int len) {

    printf("[ ");

    for (int i = 0; i < len; i++) {
      printf("%d ", lap_times[i]);
    }

    printf("]\n");
}

void update_array(int lap_times[]) {
    lap_times[0] = 1000;
}

void update_string(char name[]) {
    name[0] = 'X';
    name[6] = 'Z';
}