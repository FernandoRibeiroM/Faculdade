#include <stdio.h>

int main()
{
    int a, *b, **c, ***d;
    scanf(" %d", &a);
    b = &a;
    c = &b;
    d = &c;
    *b = a + a;
    printf("\ndobro = %d", *b);
    **c = ((*b) / a) + a + (a - (a / 2) - 1);
    printf("\ntriplo = %d", **c);
    ***d = ((**c) / 3) * 4;
    printf("\nquadruplo = %d\n", ***d);
    return 0;
}