/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
dos componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos
têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A[10], B[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 10; i++)
    {
        B[i] = (A[i] * A[i]);
    }

    for (i = 0; i < 10; i++)
    {

        printf("%d ", A[i]);
    }
    printf("\nOs novos conjuntos serao: ");
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}