#include <stdio.h>
#include<stdlib.h>


typedef struct{

    char nome[50];
    int matricula;
    float n1,n2,n3, nm;

}alunos;

void recebe(alunos v[], int t);
void ordena(alunos v[], int t);
int sequencial(alunos v[], int t, int y);
int binaria(alunos v[], int t, int y);

int main(){

    alunos *al;
    int m; 
    int t,s,b;

    printf("\nDigite a quantidade de alunos = ");
    scanf(" %d" , &t);
    al = (alunos *) malloc(t *sizeof(alunos));

    recebe(al,t);
    ordena(al,t);
    printf("\n\nDigite o numero de matricula a ser procurado = ");
    scanf(" %d" , &m);
    s = sequencial(al,t,m);
    b = binaria(al,t,m);
    
    if(s== -1 || b == -1){

        printf("\n\nO valor nao se encontra no vetor\n");
    }
    else{
        printf("\n\nlocal (busca sequencial)= %d\n" , s);
        printf("\n\nlocal (busca binaria)= %d\n" , b);
    }

    printf("\n");
    return 0;
}

void recebe(alunos v[] , int t){

    for(int i=0; i<t; i++){

        printf("\n\nDADOS ALUNO %d" , i);
        printf("\nDigite o nome do aluno %d = ", i);
        fflush(stdin);
        fgets(v[i].nome, 49, stdin);
        printf("\nDigite o numero de matricula do aluno %d = ", i);
        scanf(" %d" , &v[i].matricula);
        printf("\nDigite a nota 1 do aluno %d = " , i);
        scanf(" %f" , &v[i].n1);
        printf("\nDigite a nota 2 do aluno %d = " , i);
        scanf(" %f" , &v[i].n2);
        printf("\nDigite a nota 3 do aluno %d = " , i);
        scanf(" %f" , &v[i].n3);
        v[i].nm = ((v[i].n1 + v[i].n2 + v[i].n3)/3);
        
        for(int j =0; j<i; j++){

            if(v[i].matricula == v[j].matricula){
                printf("\n\nErro: Numero de matricula ja existente\nPreencha novamente\n");
                i--;
            }
        }
        
        printf("\n");
    }
}

void ordena(alunos v[], int t){

    int xm;
    char xn[50];
    float a;

    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            
            if(v[i].matricula<v[j].matricula){

                xm = v[i].matricula;
                v[i].matricula = v[j].matricula;
                v[j].matricula = xm;

                a = v[i].n1;
                v[i].n1 = v[j].n1;
                v[j].n1 = a;

                a = v[i].n2;
                v[i].n2 = v[j].n2;
                v[j].n2 = a;

                a = v[i].n3;
                v[i].n3 = v[j].n3;
                v[j].n3 = a;

                a = v[i].nm;
                v[i].nm = v[j].nm;
                v[j].nm = a;

                strcpy(xn,v[i].nome);
                strcpy(v[i].nome,v[j].nome);
                strcpy(v[j].nome,xn);


            }

            else{}
        }
    }

}

int sequencial(alunos v[], int t, int y){

    for(int i =0 ;i<t; i++){

        if(v[i].matricula == y){

            return i;
        }
    }

    return -1;
}

int binaria(alunos v[], int t, int y){

    int l,i,f;
    i = 0;
    f= t-1;

    do{
        l = ((i + f)/2);

        if(v[l].matricula > y){

            f= l;
        } 
        else if(v[l].matricula < y){
            i = l+1;

        }

        else if(v[l].matricula == y){
            return l;
        }
    }
    while(y != v[l].matricula && i <= f);

    if(y == v[l].matricula){

        return l;
    }

    else{

        return -1;
    }

    
}