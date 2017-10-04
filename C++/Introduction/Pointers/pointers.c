#include <stdio.h>

void update(int *a,int *b)
{
    // Complete this function    
    int a_save = *a;
    *a = *a + *b;
    *b = a_save - *b;
    if (*b < 0)
    {
        *b = 0 - *b;
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

