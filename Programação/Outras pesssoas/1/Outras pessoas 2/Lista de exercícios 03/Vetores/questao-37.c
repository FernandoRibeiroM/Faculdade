#include <stdio.h>

int main()
{
    int v[11], i, j, aux;
    for (i = 0; i < 6; i++)
    {
        printf("Insira o %do. valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                if (i != 6)
                {
                    v[10 - j] = v[j];
                }
            }
        }
    }
    printf("\nO vetor ordenado ate o sexto elemento, e decrescente ate o decimo primeiro:");
    for (i = 0; i < 11; i++)
    {
        printf(" %d", v[i]);
    }
    return 0;
}
