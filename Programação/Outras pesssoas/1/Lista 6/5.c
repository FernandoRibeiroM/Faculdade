#include <stdio.h>

int main()
{

    float numeros[3][3], *ponteiro = numeros;
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\n%f", ponteiro);
            ++ponteiro;
        }
    return 0;
}