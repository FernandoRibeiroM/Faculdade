#include <stdio.h>

int soma(int *n1, int *n2);

int main()
{
    int n1, n2, resultado;
    scanf(" %d %d", &n1, &n2);
    resultado = soma(&n1, &n2);
    printf("Soma do dobro = %d\n", resultado);
    return 0;
}

int soma(int *n1, int *n2)
{
    int soma;
    soma = (((*n1) * 2) + ((*n2) * 2));
    return soma;
}