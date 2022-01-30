/*
43. Fac ̧a um programa que leia um numero indeterminado de idades de indiv  ́  ́ıduos (pare
quando for informada a idade 0), e calcule a idade media desse grupo.
*/

#include <stdio.h>

int main()
{
    int idade, contador_idades_inseridas=0, soma_idades=0;
    float media;
    do
    {
        printf("\n\nInsira uma idade: ");
        scanf("%d", &idade);

        if (idade == 0)
        {
            printf("\nFinalizando programa.\n");
        }
        else if(idade < 0){
            printf("\nIdade invalida.");
        }
        else
        {
            soma_idades += idade;
            contador_idades_inseridas++;
        }
    } while (idade != 0);
    media = soma_idades/contador_idades_inseridas;
    printf("A media das idades inseridas e de: %.2f\n", media);
    return 0;
}