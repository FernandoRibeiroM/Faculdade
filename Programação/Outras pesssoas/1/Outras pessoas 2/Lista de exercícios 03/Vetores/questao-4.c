/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas posições
X e Y .*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A[8], random, random1, soma = 0;
    int x, y, i;

    srand(time(NULL));
    random = rand() % 8;
    random1 = rand() % 8;

    printf("O valor de X = %d e Y = %d\n", random, random1);

    x = random;
    y = random1;

    for (i = 0; i < 8; i++)
    {
        soma = x + y;
    }

    printf("\nA soma de X e Y sera de %d.\n", soma);

    return 0;
}