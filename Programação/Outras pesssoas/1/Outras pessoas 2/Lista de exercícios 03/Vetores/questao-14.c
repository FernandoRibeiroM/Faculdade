/*Fac ̧a um programa que leia um vetor de 10 posic ̧oes e verifique se existem valores iguais e os escreva na tela.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 0, i, j, w, flag;
    int vetor[10], iguais[10];
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite a %d posicao : ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            flag = 0;
            if (vetor[i] == vetor[j] && i != j)
            {
                for (w = 0; w < 10; w++)
                {
                    if (iguais[w] == vetor[j]) 
                        flag = 1;
                }

                if (flag == 0)
                {
                    iguais[a] = vetor[i]; 
                    a++;
                }
            }
        }
    }

    printf("\n\nOs valores que se repetem sao: ");

    for (i = 0; i < a; i++)
    {
        printf("%d ", iguais[i]);
    }
    
    printf("\n");

    return 0;
}