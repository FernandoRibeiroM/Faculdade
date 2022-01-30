/*Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A[10], i;

    printf("Os valores sao: ");

    for (i = 0; i <= 10; i++)
    {
        printf("%d ", A[10]);
    }

    printf("\n");

    printf("Os valores pares sao: ");

    for (i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
        printf("%d ", i);
        }
    }

    return 0;
}