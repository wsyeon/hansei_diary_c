
   
#include <stdio.h>

void main() {

    int a;
    int i;

    for (a = 1; a < 6; a++)
    {
        for (i = 5; i >= a; i--)
        {
            printf("*");
        }
        printf("\n");
    }

}