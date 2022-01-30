/*Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, nota[15];
    float soma = 0, media = 0, soma1 = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite a nota do %d aluno: ", i + 1);
        scanf("%d", &nota[i]);
    }

    for (i = 0; i < 15; i++)
    {
        soma = (nota[i] + nota[i]);
        soma1 = soma / 15;
        media += soma1 / 2;
    }

    printf("\nA media geral da turma sera de %.3f.\n", media);

    return 0;
}