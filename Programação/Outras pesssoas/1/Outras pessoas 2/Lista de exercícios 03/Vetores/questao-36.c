#include <stdio.h>

int main()
{
    int v[10], i, j, aux;
    for (i = 0; i < 10; i++)
    {
        printf("Insira o %do. valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("\nO vetor ordenado:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", v[i]);
    }
    return 0;
}
