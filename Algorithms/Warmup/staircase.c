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
        //printf("%n", &i);
        char str[n];
        for (int j = 0; j < n-i; ++j)
        {
            strcpy(str, &a); 
        }
        for (int j = 0; j < i; ++j)
        {
            strcpy(str, &b);
        }
        printf("%s", str);
    }
    return 0;
}

