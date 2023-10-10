# include <stdlib.h>
# include <stdio.h>

int main() 
{
    int i, j, k;
    for (i = 0; i < 5; i++) {  
        for (j = 0; j < 4; j++)  {  
            for (k = 0; k < 3; k++)  {  
                printf("%d %d %d\n",i, j, k);

                if (j == 2)  {  
                    goto out_of_for_loops;   
                }  
            }
        }
    }

    out_of_for_loops:
    printf("Whew! Finally out of the loops.\n");
}
