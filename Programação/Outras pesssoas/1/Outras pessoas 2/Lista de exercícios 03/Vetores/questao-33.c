#include <stdio.h>

int main()
{
    int v[15], i, j = 0;
    for (i = 0; i < 15; i++)
    {
        printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        scanf("%d", &v[j]);
        if (v[j] == 0)
        {
            j -= 1;
        }
        j++;
    }
    printf("O vetor compactado, eliminando os zeros, e: ");
    for (i = 0; i < j; i++)
    {
        printf(" %d", v[i]);
    }
    return 0;
}
