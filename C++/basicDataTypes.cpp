/*
Int ("%d"): 32 Bit integer
Long ("%ld"): 32 bit integer (same as Int for modern systems)
Long Long ("%lld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
*/
#include <iostream>
#include <cstdio>

int main()
{
    // Complete the code.
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;
    std::cin >> a >> b >> c >> d >> e >> f;
    printf("%d\n%ld\n%lld\n", a, b, c);
    printf("%c\n%.3f\n%.9lf", d, e, f);
    return 0;
}

