#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int n; 
    scanf("%d",&n);
    char a = ' ';
    char b = '#';
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < n-i; ++j)
        {
            printf(" ");
        }
        for (int j = 0; j < i; ++j)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

