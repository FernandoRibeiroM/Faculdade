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
        if (numeros[i] % 2 == 0)
        {

            printf("\n%d", ponteiro + i);
        }
    }
    return 0;
}