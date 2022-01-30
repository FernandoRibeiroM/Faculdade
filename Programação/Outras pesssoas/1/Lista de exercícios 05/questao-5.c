#include <stdio.h>
#include <ctype.h>

float operacao(float n, float n2, char simbolo)
{
    float resposta;
    if (simbolo == '+')
    {
        resposta = n + n2;
    }
    else if (simbolo == '-')
    {
        resposta = n - n2;
    }
    else if (simbolo == '*')
    {
        resposta = n * n2;
    }
    else
    {
        resposta = n / n2;
    }
    return resposta;
}
int main()
{
    float num, num2;
    char simbolo;
    printf("Insira 2 valores para realizar uma operacao: ");
    scanf("%f %f", &num, &num2);
    printf("Insira o caracter respectivo a operacao\n\n- Soma (+)\n- Subtracao (-)\n- Mutiplicacao (*)\n- Divisao (/)\n\nDigite o caracter: ");
    setbuf(stdin, NULL);
    scanf("%c", &simbolo);
    while (simbolo != '+' && simbolo != '-' && simbolo != '*' && simbolo != '/')
    {
        printf("Caracter invalido! Digite novamente sua opcao: ");
        setbuf(stdin, NULL);
        scanf("%c", &simbolo);
    }
    float resposta = operacao(num, num2, simbolo);
    printf("\nOperacao: %.2f %c %.2f = %.2f\n", num, simbolo, num2, resposta);
    return 0;
}
