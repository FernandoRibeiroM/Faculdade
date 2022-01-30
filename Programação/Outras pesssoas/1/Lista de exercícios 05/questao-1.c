#include <stdio.h>

int sinal(int n)
{
    int aux;
    if (n < 0)
    {
        aux = -1;
    }
    else if (n > 0)
    {
        aux = 1;
    }
    else
    {
        aux = 0;
    }
    return aux;
}

int main()
{
    int num;
    printf("Insira um valor: ");
    scanf("%d", &num);
    int result = sinal(num);
    if (result < 0)
    {
        printf("\nValor negativo!\n");
    }
    else if (result > 0)
    {
        printf("\nValor positivo!\n");
    }
    else
    {
        printf("\nValor nulo!\n");
    }
    return 0;
}
