#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define MAX_LIMIT 5
#define PRINT_STRING "radius =%d, area %.2f\n"
#define DEBUG 1
void do_debug()
{
#if DEBUG == 1
    printf("DEBUG 1\n");
#elif DEBUG == 0;
    printf("DEBUG 0\n");
#endif
}
int main()
{
    for (int r = 1; r < MAX_LIMIT; r++)
    {
        printf(PRINT_STRING, r, PI * r * r);
    }

    printf("Filename %s, DATE: %s, Line Number: %d\n", __FILE__, __DATE__, __LINE__);
    do_debug();
    return EXIT_SUCCESS;
}