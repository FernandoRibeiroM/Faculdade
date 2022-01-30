/*Faça um programa que possua um vetor denominado A que armazene 6 números
inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das
posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0, i;

    for (i = 0; i < 6; i++)
    {

        soma = A[0] + A[1] + A[5];
    }
        printf("O valor da soma desses vetores sera de %d.", soma);

        A[4] = 0;
        A[4] = 100;

    printf("\n\nOs valores dos vetores sao: \n%d\n%d\n%d\n%d\n%d\n%d.", A[0], A[1], A[2], A[3], A[4], A[5]);
    printf("\n");
    return 0;
}