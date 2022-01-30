#include<stdio.h>
#include<stdlib.h>

typedef struct elem{

    int dado;
    struct elem *prox;

}elem;

typedef struct fila{

    elem *ini;
    elem *fim;

}fila;

void inicia(fila *f);
void enfileira(int dado, fila *f);
int desenfileira(fila *f);
void imprime(fila *f);


int main(){

    fila *f = (fila*) malloc(sizeof(fila));
    int dado, op, i;

    if(f == NULL){

        printf("\nERRO\n");
        exit (0);
    }

    inicia(f);

    for( i =0 ; i <1;i--){
        printf("\n1 - EnfileirarR\n2 - DEsenfileirar\n3 - Imprimir\n4 - Encerrar\n");
        scanf(" %d" , &op);

        if(op == 1){

            printf("\nDADO == ");
            scanf(" %d" , &dado);
            enfileira(dado, f);

        }

        else if(op == 2){

            desenfileira(f);

        }

        else if(op == 3){

            printf("\n\n");
            imprime(f);
            printf("\n\n");
        }

        else{

            i = 2;
        }
    }


    return 0;
}

void inicia(fila *f){

    f->ini = NULL;
}

void enfileira(int dado, fila *f){

    elem *ptr = (elem*) malloc(sizeof(elem));
    if(ptr == NULL){

        printf("\nERRO");
        return;
        
    }

    else{

        ptr->dado = dado;
        ptr->prox = NULL;

        if(f -> ini == NULL){
            f->ini = ptr;
        }

        else{

            f->fim->prox = ptr;
        }

        f->fim = ptr;
    }
}

int desenfileira(fila *f){

    elem *ptr = f->ini;
    int dado;

    if(ptr != NULL){

        f->ini = ptr->prox;
        ptr->prox = NULL;

        dado = ptr->dado;
        free(ptr);

        if(f->ini == NULL){

            f->fim = NULL;

        }

    }

    else{
        printf("\nVAZIA");
        return;
    }


}

void imprime(fila *f){

    elem *ptr = f->ini;

    if(ptr != NULL){

        while(ptr != NULL){

            printf(" %d" , ptr->dado);
            ptr = ptr->prox;
        }
    }

    else{

        printf("\nVAZIA\n");
        return;
    }
}