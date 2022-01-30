/*
31. Fac ̧a um programa que calcule e escreva o valor de S
*/

#include <stdio.h>

int main(){
    int i;
    float numerador, denominador, resultado=0;
    for(i = 1; i <= 50; i++){
        numerador = i*2-1;
        denominador = i;
        printf("\n%.2f/%.2f", numerador, denominador);
        resultado += numerador/denominador;
    }
    printf("\n\nO resultado e de: %.2f\n", resultado);
    return 0;
}