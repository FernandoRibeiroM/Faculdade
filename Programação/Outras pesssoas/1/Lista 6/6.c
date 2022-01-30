#include <stdio.h>

int main()
{
    int numeros[5], *ponteiro = numeros, i;
    for (i = 0; i < 5; i++)
    {
        scanf(" %d", &numeros[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", (*ponteiro) * 2);
        ++ponteiro;
    }
    return 0;
}