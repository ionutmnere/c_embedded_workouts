# include <stdlib.h>
# include <stdio.h>

int main() 
{
    for (int index = 0, some_value = 0; 
         (index < 3) || (some_value < 5); 
         index++, some_value++) {

      printf("index  = %d, some_value = %d \n", index, some_value);
    }


    for (int index = 0 ; index < 5; index++) {
        printf(" %d. Hello World \n", index);
    }


    for (int index = 0, some_variable = 2002; index < 5; index++) {
        printf(" %d. Hello World (some_variable: %d)\n", index, some_variable);
    }


    for (int index = -4; index < 5; index++) {
        printf(" %d\n", index);
    }


    for (int index = 5; index > 0;) {
        printf(" %d\n", index);

        index--;
    }


     for (int index = 0, some_value = 0; 
         (index < 3) && (some_value < 5); 
         index++, some_value++) {

        printf("index  = %d, some_value = %d \n", index, some_value);
    }


    return EXIT_SUCCESS;
}