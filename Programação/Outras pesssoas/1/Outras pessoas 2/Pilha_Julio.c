#include<stdio.h>
#include<stdlib.h>

typedef struct elem{

    int dado;
    struct elem *prox;

}elem;

typedef struct pilha{

    elem *topo;

}pilha;

void iniciapilha(pilha *p);
void empilha(int dado , pilha *p);
int desempilha(pilha *p);
void imprime(pilha *p);


int main(){
    
    pilha *p = (pilha*) malloc(sizeof(pilha));
    int op , dado, i;

    if(p == NULL){

        printf("\nErro\n");
        exit(0);
    }

    else{

        iniciapilha(p);
    }

    for( i =0 ; i <1;i--){
        printf("\n1 - EMPILHAR\n2 - DESEMPILHAR\n3 - IMPRIMIR\n4 - ENCERRAR\n");
        scanf(" %d" , &op);

        if(op == 1){

            printf("\nDADO == ");
            scanf(" %d" , &dado);
            empilha(dado, p);

        }

        else if(op == 2){

            desempilha(p);

        }

        else if(op == 3){

            imprime(p);
        }

        else{

            i = 2;
        }
    }


    return 0;
}

void iniciapilha(pilha *p){

    p->topo = NULL;
}

void empilha(int dado , pilha *p){

    elem *ptr = (elem*) malloc(sizeof(elem));
    if(ptr == NULL){

        printf("\nErro\n");
        return;
    }

    else{

        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
    }

}

int desempilha(pilha *p){

    elem* ptr = p->topo;
    int dado;

    if(ptr == NULL){

    printf("\nVAZIA\n");
    return;

    }

    else{

        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);

        return dado;
    }

}

void imprime(pilha *p){

    elem *ptr = p->topo;

    if(ptr == NULL){

        printf("\nVAZIA\n");
        return;
    }

    else{

        printf("\n------------------------------\n");
        while(ptr != NULL){

            printf("\n%d" , ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
        printf("\n------------------------------\n");
    }


}