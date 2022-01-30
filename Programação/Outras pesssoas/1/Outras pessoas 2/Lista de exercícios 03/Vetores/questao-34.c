#include <stdio.h>

int main()
{
    int v[10], i, j, aux = 0;
    printf("Insira apenas numeros difrentes para os elementos do vetor.\n\n");
    for (i = 0; i < 10; i++)
    {
        if (aux == 0)
        {
            printf("Insira o valor do %do. elemento do vetor: ", i + 1);
        }
        else
        {
            printf("Insira novamente o %do. elemento do vetor: ", i + 1);
        }
        scanf("%d", &v[i]);
        if (i != 0)
        {
            aux = 0;
            for (j = 0; j < i; j++)
            {
                if (v[i] == v[j])
                {
                    printf("\nNumero invalido! Valor ja incluido no vetor.");
                    i -= 1;
                }
            }
        }
    }
    printf("\nO vetor:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", v[i]);
    }
    return 0;
}
