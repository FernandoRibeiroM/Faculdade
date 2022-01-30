/*
30. Fac ̧a programas para calcular as seguintes sequencias: ˆ
1 + 2 + 3 + 4 + 5 + ... + n
1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
1 + 3 + 5 + 7 + ... + (2n − 1)
*/

#include <stdio.h>

int main(){
    int numero, i, resultado1=0, resultado2=0, resultado3=0;
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++){
        resultado1 += i;
    }

    for(i = 1; i <= (2*numero - 1); i++){
        if(i % 2 != 0){
            resultado2 += i;
        }
        if(i % 2 == 0){
            resultado2 -= i;
        }
    }

    for(i = 1; i <= (2*numero - 1); i++){
        if(i % 2 != 0){
            resultado3 += i;
        }
    }

    printf("\nResultado 1: %d\nResultado 2: %d\nResultado 3: %d\n", resultado1, resultado2, resultado3);
    return 0;
}