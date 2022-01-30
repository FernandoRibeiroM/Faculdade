#include <stdio.h>
#include <stdlib.h>

struct ficha_de_cadastro{
	
	int id;
	char nome[30];
	float nota1, nota2, nota3;
};



int main (){
	
	
	int cont_linhas = 1, c;
	char final = '\n', texto_str;
	
	FILE *pont_arq; //cria variável ponteiro para o arquivo.
	
	//abrindo o arquivo com tipo de abertura e leitura
	pont_arq = fopen("alunos.txt", "r");
	
	
	if(pont_arq == NULL){//testando se o arquivo foi realmente aberto.
		printf("ERRO na abertura do arquivo! ");
		system("pause");
		exit (1); //saida do programa.
	}
	do{
		texto_str = fgetc(pont_arq);
		//printf("%c", texto_str);
		
		//realiza a contagem de linhas.
      	if(texto_str == final){
       		cont_linhas++;
       	}
       		
	}while (texto_str!= EOF);//enquanto não for final do arquivo.
	
	fclose(pont_arq);//fechando o arquivo.
	
	
	//aloca memória para a struct.
    struct ficha_de_cadastro *ficha = (struct ficha_de_cadastro *) malloc (cont_linhas*sizeof(struct ficha_de_cadastro));
  	
  	free(ficha);
	
	rewind(pont_arq);
	
	for (c=0; c<cont_linhas; c++){	
	// faz a leitura do arquivo para a struct.
		fscanf(pont_arq, "%d", &ficha[c].id);
		fscanf(pont_arq, "%s", ficha[c].nome);
		fscanf(pont_arq, "%f", &ficha[c].nota1);
		fscanf(pont_arq, "%f", &ficha[c].nota2);
		fscanf(pont_arq, "%f", &ficha[c].nota3);
		
	}
	
	for (c=0; c<cont_linhas; c++){	
	// faz a leitura do arquivo para a struct.
		printf("%d", ficha[c].id);	
		printf("%d", ficha[c].nome);	
		printf("%d", ficha[c].nota1);	
		printf("%d", ficha[c].nota2);	
		printf("%d", ficha[c].nota3);
	}
	
	/*
	int opcao, c;
	struct ficha_aluno ficha[2];
	
	ficha[0].matricula = 801 ;
	printf("nome:");
	scanf ("%s", &ficha[0].nome); 
	ficha[0].nota1 = 6.9 ;
	ficha[1].nota2 = 8.5 ;
	ficha[2].nota3 = 7.0;
	
	ficha[1].matricula = 402 ;
	printf("nome:");
	scanf ("%s", &ficha[1].nome);
	ficha[1].nota1 = 5.5 ;
	ficha[2].nota1 = 9.1 ;
	ficha[1].nota2 = 6.2 ;
	
	ficha[2].matricula = 003 ;
	printf("nome:");
	scanf ("%s", &ficha[2].nome);
	ficha[0].nota3 = 10.0 ;
	ficha[1].nota3 = 9.9 ;
	ficha[2].nota3 = 10.0;
	
	
	
	for (c=0; c<3; c++){
		
		printf("%d ", ficha[c].matricula);
		printf("%s ", ficha[c].nome);
		printf("%.2f ", ficha[c].nota1);
		printf("%.2f ", ficha[c].nota2);
		printf("%.2f \n ", ficha[c].nota3);
		printf("\n");
	}
	
	
	
		
	
	do{
		printf("\n                                DIGITE UMA OPCAO entre 0 e 9:  \n");
		printf("\n--------------------------------------------------------- \n");
		printf(" [1]. - Imprimir todos os elementos do arranjo.\n");
		printf(" [2]. - Imprimir apenas os nomes dos alunos.\n");
		printf(" [3]. - Imprimir o nome dos alunos e sua respectiva nota final.\n");
		printf(" [4]. - Buscar os dados de um aluno usando a busca sequencial.\n");
		printf(" [5]. - Imprimir os alunos ordenados de acordo com sua matrícula.\n");
	    printf(" [6]. - Editar as notas de um aluno.\n");
	    printf(" [7]. - Imprimir a matrícula, nome e nota final do aluno que obteve a MAIOR nota de todas.\n");
	    printf(" [8]. - Imprimir a matrícula, nome e nota final do aluno que obteve a MENOR nota de todas.\n");
	    printf(" [9]. - Imprimir quantos alunos foram aprovados, reprovados e a média geral. \n");
	    printf(" [0]. - SAIR...");   
	    printf("\n --------------------------------------------------------- \n");
	    printf("      DIGITE UMA OPCAO:  ");
		scanf("%d", &opcao);
		printf("\n --------------------------------------------------------- \n");
		if ((opcao < 0)||(opcao > 9)){
			printf("	VALOR DIGITADO INVALIDO, DIGITE NOVAMENTE!");
			printf("\n --------------------------------------------------------- \n");
		}
		switch(opcao){
			
			case 1:
				printf(" opcao 1 ok.");
			break;
			
			case 2:
				printf(" opcao 2 ok.");
			break;
			
			case 3:
				printf(" opcao 3 ok.");
			break;
			
			case 4:
				printf(" opcao 4 ok.");
			break;
			
			case 5:
				printf(" opcao 5 ok.");
			break;
			
			case 6:
				printf(" opcao 6 ok.");
			break;
			
			case 7:
				printf(" opcao 7 ok.");
			break;
			
			case 8:
				printf(" opcao 8 ok.");
			break;
			
			case 9:
				printf(" opcao 9 ok.");
			break;
		}
	}while (opcao != 0);*/
	
	return 0;
}