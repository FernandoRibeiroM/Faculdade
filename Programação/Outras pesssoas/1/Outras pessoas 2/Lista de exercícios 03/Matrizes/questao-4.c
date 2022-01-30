/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac ̧ao (linha e a coluna) do  ̃
maior valor.*/

#include <stdio.h>

int main()
{
    int v[4][4], i, j, maior = 0, k, l;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um valor na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
            if (v[i][j] > maior)
            {
                maior = v[i][j];
                k = i;
                l = j;
            }
        }
    }
    printf("\nA matriz resultante:\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(" %d", v[i][j]);
        }
        printf("\n");
    }
    printf("\nMaior valor da matriz e %d, na posicao [%d][%d].", maior, k + 1, l + 1);
    return 0;
}
