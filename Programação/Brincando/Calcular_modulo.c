#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x, modulo, resultado;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &modulo);
    resultado = x % modulo;
    printf("Resultado = %d\n", resultado);

}