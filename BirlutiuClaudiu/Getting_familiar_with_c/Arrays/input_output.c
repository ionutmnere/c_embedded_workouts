#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>
int main(int argc, char **argv)
{
    int d, m, y;
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &y);
    printf("%d/%d/%d\n", d, m, y);
    return EXIT_SUCCESS;
}