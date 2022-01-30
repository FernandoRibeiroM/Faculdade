#include <stdio.h>
#include <stdlib.h>
#define Max 5

/*criar Lista;
limpar lista ;
inserir intem(última posição);
inserir item(por posição);
remover item(última posição);
Recuperar item(dado uma chave);
Recuperar item(por posição);
Contar número de itens;
Verificar se esta vazia;
Verificar se esta cheia;
Imprime lista;*/

typedef struct lista{
int vetor[Max];
int fim;
}Lista;

void CriaLista();



int main()
{
    Lista *p;
    int numero, numero_excluido, op, verificacao;
    do
    {
        printf("     MENU\n");
        printf("1- Criar fila!\n2- Verificar se esta vazia!\n3- Verificar se esta cheia!\n4- Inserir um elemento!\n5- Retirar um elemento!\n6- Libera a fila\n0- Sair\n\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1: //1- criar fila!
            p = criaFila();
            if (p != NULL)
                printf("Fila criada com sucesso!\n");
            if (p == NULL)
            {

                printf("\nERRO\n");
                exit(0);
            }
            break;
        case 2: //2- Verificar se esta vazia!
            verificacao = estahVazia(p);
            if (verificacao == 1)
                printf("Esta vazio!\n");
            else
                printf("Nao esta vazia!\n");
            break;
        case 3: //3- Verificar se esta cheia!
            verificacao = estahCheia(p);
            if (verificacao == 1)
                printf("Esta cheio!\n");
            else
                printf("Nao esta cheio!\n");
            break;
        case 4: //3- inserir um elemento!
            printf("Digite o numero que deseja colocar na fila: ");
            scanf("%d", &numero);
            inserir(p, numero);
            break;
        case 5: //4- Retirar um elemento!
            verificacao = retirar(p, &numero_excluido);
            if (verificacao == 1)
            {
                printf("\nO valor %d foi retirado da fila!\n", numero_excluido);
            }
            else
            {
                printf("\nNao foi possivel retirar um elemento, pois a fila esta vazia.\n");
            }
            break;
        case 6: //5- Libera a fila!
            liberaFila(p);
            break;
        case 0:
            break;
        default: //Caso digite valor inválido
            printf("Vc digitou um valor invalido!\n");
            break;
        }
        system("pause && cls");
    } while (op != 0);
    return 0;
}
