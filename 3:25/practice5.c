#include <stdio.h>

void main() {

    int a[5][2] = {501, 502, 401, 402, 301, 302, 201, 202, 101, 102};
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%2.d\n", a[i][j]);
        }
    }
}