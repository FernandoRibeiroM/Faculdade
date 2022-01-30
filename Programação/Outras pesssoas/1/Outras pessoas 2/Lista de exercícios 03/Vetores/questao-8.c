/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos na ordem inversa.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int inverso, i;
    int a[6];

    for (i = 0; i < 6; i++)
    {
        printf("Digite %d numero inteiro: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("A numero invertido sera: ");

    for (i = 5; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}