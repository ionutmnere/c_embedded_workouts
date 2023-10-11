# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

int main() 
{
    bool some_value = false;

    if (some_value) {
      printf("some_value is true: %d\n", some_value);
    } else {
      printf("some_value is false: %d\n", some_value);
    }


    printf("\n\n");


    int a;
    int b;

    printf("Please enter a: ");
    scanf("%d", &a);

    printf("Please enter b: ");
    scanf("%d", &b);

    bool a_greater_than_b = a > b ? true : false;

    printf("a greater than b? %s\n", a_greater_than_b == true? "true" : "false");

    return EXIT_SUCCESS;
}
