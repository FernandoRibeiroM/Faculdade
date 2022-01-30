#include <stdio.h>

float mediareal(float *n)
{
    float media = 0;
    for (int i = 0; i < 10; i++)
    {
        media += n[i];
    }
    media /= 10.0;
    return media;
}
int main()
{
    float vet[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento do vetor: ", i + 1);
        scanf("%f", &vet[i]);
    }
    float media = mediareal(vet);
    printf("\nMedia do vetor: %.2f.\n", media);
    return 0;
}
