/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores
lidos juntamente com o maior, o menor e a média dos valores.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, vetor[5];
    int maior, menor;
    float media = 0, media1, media2, res = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        media = (vetor[i] + vetor[i]);
        media2 += media;
        media1 = (media2 / 5);
        res = media1 / 2;
    }

    for (i = 0; i < 5; i++)
    {
        maior = vetor[i];
        menor = vetor[i];
    }

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < maior)
        {
            menor = vetor[i];
        }
    }

    printf("O maior valor sera: %d, o menor valor sera: %d, e a media = %.3f", maior, menor, res);

    return 0;
}