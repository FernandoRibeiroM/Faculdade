/*
4a Questão
Faça um programa que multiplique duas matrizes. Uma estrutura de repetição deve ser utilizada para
percorrer as linhas e colunas.
Exemplo de saída:
Digite o elemento da linha 0 e coluna 0 da matriz A: 5
Digite o elemento da linha 0 e coluna 1 da matriz A: 7
Digite o elemento da linha 0 e coluna 2 da matriz A: 3
Digite o elemento da linha 1 e coluna 0 da matriz A: 3
Digite o elemento da linha 1 e coluna 1 da matriz A: 4
Digite o elemento da linha 1 e coluna 2 da matriz A: 6
Digite o elemento da linha 2 e coluna 0 da matriz A: 8
Digite o elemento da linha 2 e coluna 1 da matriz A: 3
Digite o elemento da linha 2 e coluna 2 da matriz A: 2
Digite o elemento da linha 0 e coluna 0 da matriz B: 5
Digite o elemento da linha 0 e coluna 1 da matriz B: 7
Digite o elemento da linha 0 e coluna 2 da matriz B: 3
Digite o elemento da linha 1 e coluna 0 da matriz B: 3
Digite o elemento da linha 1 e coluna 1 da matriz B: 4
Digite o elemento da linha 1 e coluna 2 da matriz B: 6
Digite o elemento da linha 2 e coluna 0 da matriz B: 8
Digite o elemento da linha 2 e coluna 1 da matriz B: 3
Digite o elemento da linha 2 e coluna 2 da matriz B: 2
A matriz C = A * B é igual a:
70 72 63
75 55 45
65 74 46
*/

#include <stdio.h>

int main()
{
    int matrizA[3][3], matrizB[3][3], matrizC[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d da matriz A: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d da matriz B: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\n\n");

    int k;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                matrizC[i][j] = matrizC[i][j] + (matrizA[i][k] * matrizB[k][j]);
                /*                               
                                                    c[0][0] + (a[0][0] * b[0][0]) = 5*5
                                                    c[0][0] + (a[0][1] * b[1][0]) = 3*7
                                                    c[0][0] + (a[0][2] * b[2][0]) = 8*3

                                                    c[0][1] + (a[0][0] * b[0][1]) = 5*3
                                                    c[0][1] + (a[0][1] * b[1][1]) = 3*4
                                                    c[0][1] + (a[0][2] * b[2][1]) = 8*6

                                                    c[0][2] + (a[0][0] * b[0][2]) = 5*8
                                                    c[0][2] + (a[0][1] * b[1][2]) = 3*3
                                                    c[0][2] + (a[0][2] * b[2][2]) = 8*2


                                                    c[1][0] + (a[1][0] * b[0][0]) = 
                                                    c[1][0] + (a[1][1] * b[1][0]) = 
                                                    c[1][0] + (a[1][2] * b[2][0]) = 

                                                    c[1][1] + (a[1][0] * b[0][1]) = 
                                                    c[1][1] + (a[1][1] * b[1][1]) = 
                                                    c[1][1] + (a[1][2] * b[2][1]) = 
                */
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
    return 0;
}