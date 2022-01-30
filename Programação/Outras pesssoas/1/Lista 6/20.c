#include <stdio.h>

void maior(int a[], int *max, int *min, int s);

int main()
{
    int tam, max, min, i;
    printf("\nDigite o tamanho do vetor = ");
    scanf(" %d", &tam);
    int *x = (int *)malloc(tam * sizeof(int));
    printf("\nEntre com os valores \n");
    for (i = 0; i < tam; i++)
    {
        scanf(" %d", &x[i]);
    }
    maior(x, &max, &min, tam);
    printf("\nMaior numero= %d\nMenor numero = %d\n\n", max, min);
    return 0;
}

void maior(int a[], int *max, int *min, int s)
{
    int i;
    *max = a[0];
    *min = a[0];
    for (i = 0; i < s; i++)
    {
        if (a[i] > (*max))
        {
            *max = a[i];
        }
        if (a[i] < (*max))
        {
            *min = a[i];
        }
    }
}