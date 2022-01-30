#include <stdio.h>

void imprimir(int n[][10], int n2[][10])
{
    int aux = 0;
    printf("\n\nMatriz original\n\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d", n[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz transposta\n\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d", n[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int vet[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Insira o [%d][%d] elemento da matriz: ", i + 1, j + 1);
            scanf("%d", &vet[i][j]);
        }
    }
    int inversa[10][10];
    imprimir(vet, inversa);
    return 0;
}
