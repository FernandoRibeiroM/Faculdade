#include <stdio.h>

int main()
{
    int tam, i;
    printf("\nDigite o tamanho do vetor = ");
    scanf(" %d", &tam);
    int a[tam];
    int *pa = a;
    for (i = 0; i < tam; i++)
    {

        scanf(" %d", &(*pa));
        *pa = *pa + 1;
        ++pa;
    }
    for (i = 0; i < tam; i++)
    {

        printf("\n%d", a[i]);
    }
    return 0;
}