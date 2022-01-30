/*
33. Dados n e dois numeros inteiros positivos,  ́ i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que sao m  ̃ ultiplos de  ́ i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a sa ́ıda devera ser: 0,2,3,4,6,8.
*/

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, i, contador=1;
    printf("Insira 3 valores inteiros e positivos: ");
    scanf("%d%d%d", &valor1, &valor2, &valor3);
    printf("0 ");

    for (i = 1; contador < valor1; i++)
    {
        if (i % valor2 == 0 || i % valor3 == 0)
        {
            printf("%d ", i);
            contador++;
        }
    }
    return 0;
}