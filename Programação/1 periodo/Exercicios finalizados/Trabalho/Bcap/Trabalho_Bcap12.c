#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Aluno
{
    //informações do aluno
    int matricula;
    char nome[20];
    float nota[3];
    float media;
    float final;
} Cadastro;

//essa função faz a média de 3 provas
float media(float a, float b, float c);

//Busca sequencial, busca um aluno com base na matrícula
int busca_sequencial(Cadastro *aluno, int tamanho);

//bubblesort, realiza a ordenação dos alunos
void BubbleSort(Cadastro *aluno, int tamanho);

int main()
{
    FILE *ponteiro_file;
    Cadastro *ponteiro_alunos;
    int i, quantidade_alunos = 1, contador, resposta;
    char quebra_linha = '\n', auxiliar;

    //abrindo arquivo
    ponteiro_file = fopen("teste_alunos.txt", "r");
    if (ponteiro_file == NULL)
    {
        printf("Erro");
        exit(1);
    }

    //esse loop faz o cálculo de alunos, po meio da quantidade de linhas
    do
    {
        auxiliar = fgetc(ponteiro_file);
        if (auxiliar == quebra_linha)
        {
            quantidade_alunos++;
        }

    } while (auxiliar != EOF);
    fclose(ponteiro_file);
    //até aqui não tem erro

    //Alocação dinâmica de memória.
    ponteiro_alunos = (Cadastro *) malloc(quantidade_alunos * sizeof(Cadastro));

    //abrindo arquivo
    ponteiro_file = fopen("teste_alunos.txt", "r");


    for (i = 0; i < quantidade_alunos; i++)
    {
        fscanf(ponteiro_file, "%d%s%f%f%f", &ponteiro_alunos[i].matricula, &ponteiro_alunos[i].nome, &ponteiro_alunos[i].nota[0], &ponteiro_alunos[i].nota[1], &ponteiro_alunos[i].nota[2]);
        ponteiro_alunos[i].media = media(ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2]);
    }
    fclose(ponteiro_file);

    do
    {
        //MENU
        printf("                   Menu\n1- Imprimir todos os elementos do arranjo\n2- Imprimir os nomes dos alunos\n3- Imprimir o nome dos alunos e sua nota final(media)\n4- Buscar os dados de um aluno usando sua matricula\n5- Imprimir os alunos ordenados com base na matricula\n6- Editar as notas de um aluno\n7- Imprimir a matricula, nome e nota final do aluno que obteve a maior nota\n8- Imprimir a matricula, nome e nota final do aluno que obteve\n9- Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados, e a media geral\n0- Sair do programa\n\n");
        scanf("%d", &resposta);
        system("pause");
        system("cls");

        if (resposta == 1)
        {
            //1. Imprimir todos os elementos do arranjo;
            for (i = 0; i < quantidade_alunos; i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
        }
        else if (resposta == 2)
        {
            //2. Imprimir apenas os nomes dos alunos;
            for (i = 0; i < quantidade_alunos; i++)
            {
                printf("Nome aluno %d: %s\n\n", i + 1, ponteiro_alunos[i].nome);
            }
        }
        else if (resposta == 3)
        {
            //3. Imprimir o nome dos alunos e sua respectiva nota final;
            for (i = 0; i < quantidade_alunos; i++)
            {
                printf("Nome aluno %d: %s\nMedia: %0.2f\n\n", i + 1, ponteiro_alunos[i].nome, ponteiro_alunos[i].media);
            }
        }
        else if (resposta == 4)
        {
            //4. Buscar os dados de um aluno usando a busca sequencial;
            contador = busca_sequencial(ponteiro_alunos, quantidade_alunos);
            printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[contador].matricula, ponteiro_alunos[contador].nome, ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2], ponteiro_alunos[contador].media);
        }
        else if (resposta == 5)
        {
            //5. Imprimir os alunos ordenados de acordo com sua matrícula;

            BubbleSort(ponteiro_alunos, quantidade_alunos);
            for (i = 0; i < quantidade_alunos; i++)
            {
                printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2], ponteiro_alunos[i].media);
            }
        }
        else if (resposta == 6)
        {
            //6. Editar as notas de um aluno, para isso é necessário que se busque os dados do aluno.
            contador = busca_sequencial(ponteiro_alunos, quantidade_alunos);
            printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\n", ponteiro_alunos[contador].matricula, ponteiro_alunos[contador].nome, ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2]);
            printf("Digite as notas editadas:\n");
            scanf("%f %f %f", &ponteiro_alunos[contador].nota[0], &ponteiro_alunos[contador].nota[1], &ponteiro_alunos[contador].nota[2]);
            ponteiro_alunos[contador].media = media(ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2]);
            printf("Matricula: %d\nNome: %s\nNota 1: %0.2f\nNota 2: %0.2f\nNota 3: %0.2f\nMedia: %0.2f\n\n", ponteiro_alunos[contador].matricula, ponteiro_alunos[contador].nome, ponteiro_alunos[contador].nota[0], ponteiro_alunos[contador].nota[1], ponteiro_alunos[contador].nota[2], ponteiro_alunos[contador].media);
        }
        else if (resposta == 7)
        {
            //7. Imprimir a matrícula, nome e nota final do aluno que obteve a maior nota de todas;
        }
        else if (resposta == 8)
        {
            //8. Imprimir a matrícula, nome e nota final do aluno que obteve a menor nota de todas;
        }
        else if (resposta == 9)
        {
            //9. Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados, imprima ainda a média geral;
        }
        else if (resposta > 9 || resposta < 0)
        {
            printf("Erro\nVoce digitou um valor invalido.\n");
        }
        system("pause");
        system("cls");

    } while (resposta != 0);

    //função bobblesort, para que o código seja organizado antes de ser salvo
    BubbleSort(ponteiro_alunos, quantidade_alunos);

    //criação do arquivo e fprintf dos dados nele
    FILE *Alunos_novo;
    Alunos_novo = fopen("Novo_Arquivo_alunos.txt", "w");
    if (Alunos_novo == NULL)
    {
        printf("Erro");
        exit(1);
    }
    for (i = 0; i < quantidade_alunos; i++)
    {
        fprintf(Alunos_novo, "%d %s %0.1f %0.1f %0.1f\n", ponteiro_alunos[i].matricula, ponteiro_alunos[i].nome, ponteiro_alunos[i].nota[0], ponteiro_alunos[i].nota[1], ponteiro_alunos[i].nota[2]);
    }
    fclose(Alunos_novo);

    return 0;
}

//função media
float media(float a, float b, float c)
{
    //funcionamento da fução que calcula média
    float resultado = (a + b + c) / 3.0;
    return resultado;
}

//Função de busca sequencial
int busca_sequencial(Cadastro *aluno, int tamanho)
{
    int posicao, busca, i;
    printf("Digite a matricula do aluno que quer achar:");
    scanf("%d", &busca);
    for (i = 0; i < tamanho; i++)
    {
        if (busca == aluno[i].matricula)
        {
            posicao = i;
        }
    }
    return posicao;
}

//função bubblesort
void BubbleSort(Cadastro *aluno, int tamanho)
{
    int contador, i;
    Cadastro auxiliar;
    for (contador = 1; contador < tamanho; contador++)
    {
        for (i = 0; i < tamanho - 1; i++)
        {
            if (aluno[i].matricula > aluno[i + 1].matricula)
            {
                auxiliar = aluno[i];
                aluno[i] = aluno[i + 1];
                aluno[i + 1] = auxiliar;
            }
        }
    }
}