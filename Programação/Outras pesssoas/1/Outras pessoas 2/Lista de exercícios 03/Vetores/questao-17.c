/*Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos que possuırem
valores negativos.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, vetor[10] = {2, 5, 6, -4, -6, 4, -9, 2, 1, 0};

    printf("As posicoes digitadas sao: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    vetor[3] = 0;
    vetor[4] = 0;
    vetor[6] = 0;

    printf("\n\nAs novas posicoes sao: ");
    for (i = 0; i < 10; i++)
    {
     
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}