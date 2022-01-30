#include <stdio.h>

void preenche(int *a[]);

int main()
{
    int a[5];
    preenche(&a);
    return 0;
}

void preenche(int *a[])
{
    int *p = a, x, i;
    for (i = 0; i < 5; i++)
    {
        scanf(" %d", &x);
        *p = x;
        ++p;
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }
}