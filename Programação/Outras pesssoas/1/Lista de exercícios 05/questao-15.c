#include <stdio.h>

int maiorque10(int *n)
{
    int contador = 0;
    for (int i = 0; i < 16; i++)
    {
        if (n[i] > 10)
        {
            contador++;
        }
    }
    return contador;
}
int main()
{
    int vet[4][4], maior, menor;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o [%d][%d] elemento da matriz: ", i + 1, j + 1);
            scanf("%d", &vet[i][j]);
        }
    }

    int cont = maiorque10(*vet);
    printf("\nA matriz inserida contem %d numero(s) maior(es) que 10.\n", cont);
}
