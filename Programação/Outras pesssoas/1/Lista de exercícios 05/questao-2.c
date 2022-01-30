#include <stdio.h>
#include <math.h>

void quadradoperfeito(int n)
{
    float aux = sqrt(n);
    if (sqrt(n) == aux)
    {
        printf("\nQuadrado perfeito!\n");
    }
    else
    {
        printf("\nValor inserido nao e quadrado perfeito!\n");
    }
}
int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    quadradoperfeito(num);
    return 0;
}
