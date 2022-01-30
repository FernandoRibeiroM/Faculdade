#include <stdio.h>

int main()
{
    int num, i, j, soma, aux;
    printf("Insira, o numero de linhas que deseja imprimir do Triangulo de Pascal: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Numero invalido! Apenas numeros a partir de 1: ");
        scanf("%d", &num);
    }
    int v[num], v2[num];
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == (i))
            {
                v[j] = 1;
            }
            else
            {
                v[j] = v2[j] + v2[j - 1];
            }
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d ", v[j]);
            v2[j] = v[j];
        }
        printf("\n");
    }
    return 0;
}
