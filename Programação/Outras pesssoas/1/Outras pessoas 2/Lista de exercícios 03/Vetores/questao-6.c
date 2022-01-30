/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
deverá ser impresso o maior e o menor elemento do vetor.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a[10], maior_valor, menor_valor;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite %d valor: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        maior_valor = a[i];
        menor_valor = a[i];
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] > maior_valor)
            maior_valor = a[i];

        else if (a[i] < menor_valor)
            menor_valor = a[i];
    }

    printf("\nO maior numero entrado sera %d .", maior_valor);
    printf("\nO menor numero entrado sera %d .", menor_valor);

    return 0;
}