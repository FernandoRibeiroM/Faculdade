/*Faça um programa que preencha um vetor com 10 números reais, calcule e
mostre a quantidade de números negativos e a soma dos números positivos desse
vetor.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, vetor[10], soma = 0, soma1 = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numeros real: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            soma1 += 1;
        }

        if (vetor[i] > 0)
        {
            soma += vetor[i];
        }
    }

    printf("Numeros negativos = %d e a soma dos numeros positivos = %d", soma1, soma);

    return 0;
}