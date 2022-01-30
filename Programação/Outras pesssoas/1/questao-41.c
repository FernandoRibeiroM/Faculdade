/*
Fac ̧a um programa que calcula a associac ̧ao em paralelo de dois resistores  ̃ R1 e R2
fornecidos pelo usuario via teclado. O programa fica pedindo estes valores e calculando  ́
ate que o usu  ́ ario entre com um valor para resist  ́ encia igual a zero. ˆ

R =
R1 ∗ R2
R1 + R2
*/

#include <stdio.h>

int main()
{
    float r1, r2, r;
    do
    {
        printf("\n\nInsira o valor de R1: ");
        scanf("%f", &r1);
        printf("Insira o valor de R2: ");
        scanf("%f", &r2);

        if (r1 == 0 || r2 == 0)
        {
            printf("\nFinalizando programa.\n");
        }
        else
        {
            r = (r1 * r2) / (r1 + r2);
            printf("O resultado de R e de: %.2f", r);
        }
    } while (!(r1 == 0 || r2 == 0));
    return 0;
}