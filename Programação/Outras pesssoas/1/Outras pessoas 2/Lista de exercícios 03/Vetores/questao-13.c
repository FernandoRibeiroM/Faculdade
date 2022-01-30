/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se
encontram o maior e o menor valor.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, vetor[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int posicao = 0;
    int posicao1 = 0;
    int maior = vetor[0];
    int menor = vetor[0];

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
            posicao = i;
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicao1 = i;
        }
    }

    printf("\nO maior valor sera: %d, na posicao %d.\n", maior, posicao + 1);
    printf("O menor valor sera: %d, na posicao %d.\n\n", menor, posicao1 + 1);

    return 0;
}