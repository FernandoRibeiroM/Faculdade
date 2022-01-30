#include <stdio.h>

int main()
{
    int a, b, v[4], v2[4], soma[4], i;
    printf("Insira o 1o. valor, sendo apenas natural menor que 10.000, no vetor: ");
    scanf("%d", &a);
    while (a < 0 || a > 9999)
    {
        printf("Numero invalido! Insira novamente um numero natural menor que 10.000: ");
        scanf("%d", &a);
    }
    for (i = 3; a != 0; i -= 1)
    {
        v[i] = (a % 10);
        soma[i] = v[i];
        a /= 10;
    }
    printf("Insira o 2o. valor, sendo apenas natural menor que 10.000, no vetor: ");
    scanf("%d", &b);
    while (b < 0 || b > 9999)
    {
        printf("Numero invalido! Insira novamente um numero natural menor que 10.000: ");
        scanf("%d", &b);
    }
    for (i = 3; b != 0; i -= 1)
    {
        v2[i] = (b % 10);
        soma[i] += v2[i];
        b /= 10;
    }
    printf("\nSoma por elemento dos vetores A e B:");
    for (i = 4; i > 0; i -= 1)
    {
        printf(" %d", soma[i]);
    }
    return 0;
}
