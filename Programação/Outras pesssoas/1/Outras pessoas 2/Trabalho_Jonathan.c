#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//struct que irá armazenar os dados.

typedef struct ficha_de_cadastro{
    int id;
    char nome [50];
    float notas[3];
    float media; 
}cadastro;//declaração da struct.

//protótipo da função media
//void media_aluno(struct ficha_de_cadastro *res);

//protótipo da função linha.
void linha(void);

//função principal.
int main ()
{
	setlocale(LC_ALL,"portuguese");
	cadastro ficha[3];
  	int i, c, j, a = 3, option;
  	float mat_notas[a][3];
    //leitura dos dados
	for (c=0; c<a; c++){
	   	printf("Digite o %d nome: ", c+1);
	    setbuf(stdin, NULL);
	    fgets(ficha[c].nome, 40, stdin);
        printf("Digite o número de matricula do %d aluno: ", c+1);
	    scanf("%d", &ficha[c].id);
	    // leitura das notas. 
  		for (i = 0; i < 3; i++){
    		printf("Digite os valor da %d nota: ", i+1);
    		scanf("%f", &ficha[c].notas[i]);
		}
		
		printf("\n\n");
    } 
  	
  	// chamada da função média.
  	//media_aluno(&ficha);
  	
	// Menu de apresentação dos resultados.
	printf("\n\n --------- Menu interativo dos resultados ---------\n\n");
	
	do {
	         
	    printf("\n                                DIGITE UMA OPCAO entre 1 e 9:  ");
	    linha();
		printf(" [1]. - Editar as notas de um aluno.\n");
		printf(" [2]. - Imprimir apenas os nomes dos alunos.\n");
		printf(" [3]. - Imprimir todos os elementos do arranjo.\n");
		printf(" [4]. - Imprimir o nome dos alunos e sua respectiva nota final.\n");
		printf(" [5]. - Buscar os dados de um aluno usando a busca sequencial.\n");
	    printf(" [6]. - Imprimir os alunos ordenados de acordo com sua matrícula.\n");
	    printf(" [7]. - Imprimir a matrícula, nome e nota final do aluno que obteve a MAIOR nota de todas.\n");
	    printf(" [8]. - Imprimir a matrícula, nome e nota final do aluno que obteve a MENOR nota de todas.\n");
	    printf(" [9]. - Imprimir quantos alunos foram aprovados, reprovados e a média geral. \n");
		linha();      
	    printf("      DIGITE UMA OPCAO:  ");
	    scanf("%d", &option);
	    linha();
	    switch (option){
	        case 1:
	        linha();
	        printf("					RESULTADO [1]\n");
	        printf("--> Nota de qual aluno deseja editar?");
	        linha();
	        break;
	        case 2:
	        linha();
	        printf("					RESULTADO [2]\n");
	        for (c=0; c<a; c++){
				printf("Nome ...........: %s", ficha[c].nome);
			}
			linha();
	        break;
	        case 3:
	        linha();
	        printf("					RESULTADO [3]\n");
	        
	        for (c=0; c<a; c++){
	        	printf("\n MATRICULA...: %d   NOME...: %s     NOTAS...: %.2f %.2f %.2f", ficha[c].id, ficha[c].nome, ficha[c].notas[i], ficha[c].notas[i], ficha[c].notas[i]);

			}
			
	        linha();
	        break;
	        case 4:
	        linha();
	        printf("					RESULTADO [4]\n");
	        printf("resultado 4");
	        linha();
	        break;
	        case 5:
	        linha();
	        printf("					RESULTADO [5]\n");
	        printf("resultado 5");
	        linha();
	        break;
	        case 6:
	        linha();
	        printf("					RESULTADO [6]\n");
	        printf("resultado 6");
	        linha();
	        break;
	        case 7:
	        linha();
	        printf("					RESULTADO [7]\n");
	        printf("resultado 7");
	        linha();
	        break;
	        case 8:
	        linha();
	        printf("					RESULTADO [8]\n");
	        printf("resultado 8");
	        linha();
	        break;
	        case 9:
	        linha();
	        printf("					RESULTADO [9]\n");
	        printf("resultado 9");
	        linha();
	        break;
	    }
	    
	    if ((option <0)|| (option >9)){
		    printf(" 			OPCAO INVALIDA!!! ESCOLHA NOVAMENTE. \n");
		    linha();
	    	
		}
	}while ( option != 0);
	
	printf("			PROGRAMA ENCERRADO, OBRIGADO POR USAR, VOLTE SEMPRE!");
	linha();
	return 0;
}

//função media
/*void media_aluno(struct ficha_de_cadastro *res){
	int c, i, a=3;
	float m[3], soma = 0;
	
	soma = (res -> notas[1] + res -> notas[1] + res -> notas[1]);
			
	for (c=0; c<a; c++){
	    
		m[c] = soma / 3;
	}
		
		
}*/
//função linha.
void linha(void){
  printf("\n\n ------------------------------------------------------------------------------------------\n\n");  
}