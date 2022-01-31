#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct numeros
{
    float x, y;
} Numeros;

float soma(Numeros A);

float subtracao(Numeros A);

float multipilcacao(Numeros A);

float divisao(Numeros A);

float raiz_quadrada(Numeros A);

float elevado(Numeros A);

float apagar(Numeros A);

int main()
{
    Numeros N;
    int op, contagem = 1;
    do
    {
        printf("_________Menu_________\n");
        printf("1- Soma\n2- Subitracao\n3- Multiplicacao\n4- Divisao\n5- Raiz Quadrada\n6- Elevado\n7- Apagar\n0- Sair\nResposta: ");
        scanf("%d", &op);
        if (contagem == 1)
        {
            printf("Digite Dois numeros:\n");
            scanf("%f %f", &N.x, N.y);
            contagem++;
        }
        else
        {
            printf("Digite Um numero:\n");
            scanf("%f", &N.y);
        }
        switch (op)
        {
        case 1: //soma
            printf("%f + %f = ", N.x, N.y);
            N.x = soma(N);
            printf("%f", N.x);
            break;
        case 2: //subtracao
            printf("%f - %f = ", N.x, N.y);
            N.x = subtracao(N);
            printf("%f", N.x);
            break;
        case 3: //Multiplicacao
            printf("%f * %f = ", N.x, N.y);
            N.x = multipilcacao(N);
            printf("%f", N.x);
            break;
        case 4: //divisao
            printf("%f / %f = ", N.x, N.y);
            N.x = divisao(N);
            printf("%f", N.x);
            break;
        case 5: //Raiz quadrada
            printf("Sera reslizada a raiz quadrada do primeiro numero.");
            printf("Raiz de %f = ", N.x, N.y);
            N.x = raiz_quadrada(N);
            printf("%f", N.x);
            break;
        case 6: //Elevado
            printf("%f ^ %f = ", N.x, N.y);
            N.x = elevado(N);
            printf("%f", N.x);
            break;
        case 7: //Apagar
            printf("%f sera apagado\n", N.x, N.y);
            N.x = apagar(N);
            printf("%f", N.x);
            contagem--;
            break;
        case 0: //Sair
            break;
        default: //Numero errado
            printf("Vc digitou um valor invalido!\n");
            break;
        }
        system("pause");
        system("cls");
    } while (op != 0);

    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}

//2
float soma(Numeros A)
{
    return (A.x + A.y);
}

//2
float subtracao(Numeros A)
{
    return (A.x - A.y);
}

//2
float multipilcacao(Numeros A)
{
    return A.x * A.y;
}

//2
float divisao(Numeros A)
{
    return (A.x / A.y);
}

//1
float raiz_quadrada(Numeros A)
{
    return sqrt(A.x);
}

//2
float elevado(Numeros A)
{
    return pow(A.x, A.y);
}

//2
float apagar(Numeros A)
{
    return A.x = 0;
}
