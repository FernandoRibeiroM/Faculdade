#include <stdio.h>
#include <ctype.h>

void mediaAP(float *n, char l)
{
    float media = 0;
    if (l == 'A')
    {
        for (int i = 0; i < 3; i++)
        {
            media += n[i];
        }
        media /= 3.0;
        printf("\nMedia Aritmetica: %.2f\n", media);
    }
    else
    {
        n[0] *= 5.0;
        n[1] *= 3.0;
        n[2] *= 2.0;
        for (int i = 0; i < 3; i++)
        {
            media += n[i];
        }
        media /= 3.0;
        printf("\nMedia Ponderada: %.2f\n", media);
    }
}
int main()
{
    float nota[3];
    char letra;
    for (int i = 0; i < 3; i++)
    {
        printf("Insira a %da. nota (0-10): ", i + 1);
        scanf("%f", &nota[i]);
        while (nota[i] < 0 || nota[i] > 10)
        {
            printf("Nota invalida! Insira a %da. nota novamente (0-10): ", i + 1);
            scanf("%f", &nota[i]);
        }
    }
    printf("\nInsira a letra A = media aritmetica ou P = media ponderada: ");
    setbuf(stdin, NULL);
    scanf("%c", &letra);
    letra = toupper(letra);
    while (letra != 'A' && letra != 'P')
    {
        printf("Caracter invalido! Insira novamente a letra A = media aritmetica ou P = media ponderada:");
        setbuf(stdin, NULL);
        scanf("%f", &letra);
        letra = toupper(letra);
    }
    mediaAP(nota, letra);
    return 0;
}
