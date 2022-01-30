/*
42. Fac ̧a um programa que leia um conjunto nao determinado de valores, um de cada vez, e  ̃
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float v1, quadrado, cubo, raiz_quadrada;
    do
    {
        printf("\n\nInsira um valor: ");
        scanf("%f", &v1);

        if (v1 < 0)
        {
            printf("\nFinalizando programa.\n");
        }
        else
        {
            quadrado = v1 * v1;
            cubo = v1 * v1 * v1;
            raiz_quadrada = sqrt(v1);
            printf("O quadrado de %.2f e: %.2f", v1, quadrado);
            printf("\nO cubo de %.2f e: %.2f", v1, cubo);
            printf("\nA raiz quadrada de %.2f e: %.2f", v1, raiz_quadrada);

        }
    } while (v1 >= 0);
    return 0;
}