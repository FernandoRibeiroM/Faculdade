#include <stdio.h>

void maior(int a[], int *m, int *v, int s);

int main()
{
    int tam, m, v, i;
    printf("\nDigite o tamanho do vetor = ");
    scanf(" %d", &tam);
    int *x = (int *)malloc(tam * sizeof(int));
    for (i = 0; i < tam; i++)
    {
        scanf(" %d", &x[i]);
    }
    maior(x, &m, &v, tam);
    printf("\nMaior numero= %d\nVezes que aparece = %d\n", m, v);
    return 0;
}

void maior(int a[], int *m, int *v, int s)
{
    int i;
    *m = a[0];
    *v = 0;
    for (i = 0; i < s; i++)
    {
        if (a[i] > (*m))
        {
            *v = 0;
            *m = a[i];
            *v = *v + 1;
        }
        else if (a[i] == (*m))
        {
            *v = *v + 1;
        }
    }
}