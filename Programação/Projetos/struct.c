#include <stdio.h>
#include <string.h>
struct cadastro
{
    char nome[30];
    int idade;
    int numero;
    char cidade[30];
    char rua[30];
};
int main()
{
    struct cadastro aluno[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(aluno[i].nome);

        printf("Digite sua idade: ");
        scanf("%d", &aluno[i].idade);

        printf("Digite o nome da cidade em que vc mora: ");
        setbuf(stdin, NULL);
        gets(aluno[i].cidade);

        printf("Digite o nome da rua em que vc mora: ");
        setbuf(stdin, NULL);
        gets(aluno[i].rua);

        system("pause");
        system("cls");
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\nIdade: %d\nNumero:%d\nCidade: %s\nRua: %s\n\n", aluno[i].nome, aluno[i].idade, aluno[i].cidade, aluno[i].rua);
    }
    system("pause");
    system("cls");
    printf("By: Fernando Ribeiro Martins");
    return 0;
}