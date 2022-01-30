#include <stdio.h>

void preenche(int *a, int b);

int main()
{
    int a[5], x, i;
    scanf(" %d", &x);
    preenche(&a, x);
    for (i = 0; i < 5; i++)
    {

        printf("\n%d", a[i]);
    }
    return 0;
}

void preenche(int *a, int b)
{
    int *p = a, i;
    for (i = 0; i < 5; i++)
    {

        *p = b;
        ++p;
    }
}