# include <stdlib.h>
# include <stdio.h>

# define PI 3.14159
# define MAX_LIMIT 5
# define PRINT_STRING "radius = %d, area = %.2f\n"


#define ELEMENTS 2, 4, 6, 8, 10, 12, 14


#define MAX_SIZE 5
#define USUAL_SIZE MAX_SIZE 


#define ADD(x, y) x + y 
#define SUB(x, y) x - y 



#define EVEN_ODD(num) ((num % 2 == 0) ? printf("Even: %d\n", num) : printf("Odd: %d\n", num))

#define ODD_EVEN(num)                       \
    {                                       \
      if (num % 2 == 0) {                   \
          return printf("Even: %d\n", num); \
      }                                     \
      else {                                \
          return printf("Odd: %d\n", num);  \
      }                                     \
    }




int main() 
{
    for (int r = 1; r < MAX_LIMIT; r++) {
      printf(PRINT_STRING, r, PI * r * r);
    }
    printf("\n\n");
    

    int arr[] = { ELEMENTS };
 
    for (int i = 0; i < 7; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n\n");



    for (int i = 0; i < USUAL_SIZE; i++) {
        printf("%d\n", i);
    }
    printf("\n\n");


    int a = 10, b = 15;

    int result = ADD(a, b);
    printf("Sum = %d\n", result);

    result = SUB(a, b);
    printf("Difference = %d\n", result);
    printf("\n\n");



    EVEN_ODD(6);
    ODD_EVEN(5);
    printf("\n\n");


    printf("Filename: %s\n", __FILE__);
    printf("Date in MMM DD YYYY format: %s\n", __DATE__);
    printf("Time in HH:MM:SS format: %s\n", __TIME__);
    printf("Line number: %d\n", __LINE__);

    return EXIT_SUCCESS;
}