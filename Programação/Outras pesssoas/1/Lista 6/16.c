#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N);

int main()
{
    int tam, nn, i;
    printf("\nDigite o tamanho do vetor = ");
    scanf(" %d", &tam);
    float *vet = (float *)malloc(tam * sizeof(float));
    for (i = 0; i < tam; i++)
    {
        scanf(" %f", &vet[i]);
    }
    nn = negativos(&(*vet), tam);
    printf("\nNegativos = %d", nn);
    return 0;
}

int negativos(float *vet, int N)
{
    int vezes = 0, i;
    for (i = 0; i < N; i++)
    {
        if (*(vet + i) < 0)
        {
            vezes++;
        }
        else
        {
        }
    }
    return vezes;
}