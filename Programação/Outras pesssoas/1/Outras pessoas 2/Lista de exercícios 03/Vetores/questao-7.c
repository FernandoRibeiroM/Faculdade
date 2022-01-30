/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A[10];
    int i;

    printf("Informe 10 numeros inteiros");

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d numero: ", i + 1);
        scanf("%d", &A[i]);
    }
    int posicao = 0;
    int maior_valor = A[0];

    printf("\n\nOs 10 numeros inteiros sao: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
        if (A[i] > maior_valor)
        {
            maior_valor = A[i];
            posicao = i;
        }
    }

    printf("\n\nO maior elemento sera %d, que se encontra na %d posicao.", maior_valor, posicao + 1, posicao);

    return 0;
}