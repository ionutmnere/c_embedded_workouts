# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int num = 50;
    int test_num = 50;

    num += 30;
    test_num = test_num + 30;
    printf("num after adding 30: %d\n", num);
    printf("test_num after adding 30: %d\n", test_num);

    num -= 10;
    test_num = test_num - 50;
    printf("num after subtracting 10: %d\n", num);
    printf("test_num after subtracting 10: %d\n", test_num);

    num *= 2;
    test_num = test_num * 2;
    printf("num after multplying by 2: %d\n", num);
    printf("test_num after multplying by 2: %d\n", test_num);

    num /= 5;
    test_num = test_num / 5;
    printf("num after dividing by 5: %d\n", num);
    printf("test_num after dividing by 5: %d\n", test_num);

    num %= 6;
    test_num = test_num % 6;
    printf("num after computing remainder: %d\n", num);
    printf("test_num after computing remainder: %d\n", test_num);


    printf("\n\n");
    int num2 = 50;

    num2 += 30 / 2;
    printf("num after adding 30 / 2: %d\n", num2);

    num2 -= 10 + 2;
    printf("num after subtracting 10 + 2: %d\n", num2);

    num2 *= 5 - 2;
    printf("num after multiplying by 5 - 2: %d\n", num2);

    num2 /= 2 + 1;
    printf("num after dividing by 2 + 1: %d\n", num2);
    
    return EXIT_SUCCESS;
}