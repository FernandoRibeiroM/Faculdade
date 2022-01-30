/*Faca um programa que leia um vetor de 10 numeros. Leia um numero x. Conte os
multiplos de um numero inteiro x num vetor e mostre-os na tela.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, vetor[10], n;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOs numeros digitados sao: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\nSelecione algum numero: ");
    scanf("%d", &vetor[i]);

    printf("\nSeus multiplos sao: ");

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % n == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
