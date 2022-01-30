#include <stdio.h>

int main()
{

    float numeros[10], *ponteiro = numeros;
    int i;
    for (i = 0; i < 10; i++)
    {

        printf("\n%p", ponteiro);
        ++ponteiro;
    }
    return 0;
}