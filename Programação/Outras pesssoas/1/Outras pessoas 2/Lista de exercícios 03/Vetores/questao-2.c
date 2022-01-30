/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}