#include <stdio.h>

void triangulo(int n)
{
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int aux = ((2 * i) - 1) / 2;
        for (int j = 1; j <= (aux + n); j++)
        {
            if (j < (n - aux))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Insira a altura do triangulo: ");
    scanf("%d", &num);
    while (num <= 0)
    {
        printf("Valor invalido! Insira novamente a altura do triangulo: ");
        scanf("%d", &num);
    }
    triangulo(num);
    return 0;
}
