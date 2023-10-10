# include <stdlib.h>
# include <stdio.h>

int main() 
{
    for (int i = 0; i < 50; i++) {
      	if (i % 10 == 0) {
        	printf("%d is a multiple of 10\n", i);
      	}	
    }
    printf("\n\n");


    for (int i = 0; i < 50; i++) {
        if (i % 10 == 0) {
            printf("%d is a multiple of 10\n", i);
        } else if (i % 5 == 0) {
            printf("%d is a multiple of 5 but not a multiple of 10\n", i);
        }
    }
    printf("\n\n");


    float lap_timings[] = {12.3, 15.4, 11.2, 9.8, 13.5, 12.1};

    size_t lap_length = sizeof(lap_timings) / sizeof(lap_timings[0]);

    for (int i = 0; i < lap_length; i++) {
        printf("Element %d of the array lap_timings is: %.2f\n", i, lap_timings[i]);
    }
    printf("\n\n");


    char name[12] = "Adam Smith";

    size_t name_length = sizeof(name) / sizeof(name[0]);

    printf("Length of char array: %zu\n\n", name_length);

    for (int i = 0; i < name_length; i++) {
        printf("%c|", name[i]);
    }
    printf("\n\n");


    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 4; j++) {
            printf("%d - %d\n", i, j);
        }
    }
    printf("\n\n");



    char letters[] = "ABCD";
    int numbers[] = {100, 200, 300};

    for (int letter_index = 0; letter_index < 4; letter_index++) {

        for (int number_index = 0; number_index < 3; number_index++) {
            
            printf("%c - %d\n", letters[letter_index], numbers[number_index]);
        }
    }


    return EXIT_SUCCESS;
}
