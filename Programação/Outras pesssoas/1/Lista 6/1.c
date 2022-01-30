#include <stdio.h>

void leitura(int *n1, int *n2);

int main()
{
    int n1, n2;
    scanf(" %d %d", &n1, &n2);
    leitura(&n1, &n2);
    printf("\n%d\n%d\n", n1, n2);
    return 0;
}

void leitura(int *n1, int *n2)
{
    int troca;
    if (*n1 < *n2)
    {
        troca = *n1;
        *n1 = *n2;
        *n2 = troca;
    }
}