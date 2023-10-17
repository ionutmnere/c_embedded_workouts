# include <stdlib.h>
# include <stdio.h>

int main(int argc, char* argv[]) 
{

    printf("Number of command line arguments: %d\n", argc);
    printf("Command line argument at index 0: %s\n", argv[0]);
    printf("Command line argument at index 1: %s\n", argv[1]);
    printf("\n\n");





    printf("Program name: %s\n", argv[0]);

    if (argc == 1) {
      printf("No additional command line arguments were passed into this program\n");
    } else {
      printf("Number of command line arguments: %d\n", argc);

      for (int i = 0; i < argc; i++) {
        printf("Argument at index: %d is %s\n", i, argv[i]);
      }
    }
    printf("\n\n");




    if (argc < 4) {
      printf("Program invocation 'program_name operator operand_1 operand_2'\n");

      return EXIT_FAILURE;
    }

    float result = 0;
    char operator = argv[1][0];
    double operand_1 = atof(argv[2]);
    double operand_2 = atof(argv[3]);

    switch (operator) {
      case '+':
        result = operand_1 + operand_2;
        break;
      case '-':
        result = operand_1 - operand_2;
        break;
      case '*':
        result = operand_1 * operand_2;
        break;
      case '/':
        result = operand_1 / operand_2;
        break;
    }

    printf("%.2f %c %.2f = %.2f\n", operand_1, operator, operand_2, result);


    return EXIT_SUCCESS;
}
