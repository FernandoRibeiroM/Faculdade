#include <stdio.h>
int main () {
    int N1, N2, N3;
    printf ("Digite o primeiro numero: ");
    scanf ("%d", &N1);
    printf ("Digite o segundo numero: ");
    scanf ("%d", &N2);
    printf ("Digite o terceiro numero: ");
    scanf ("%d", &N3);
    if (N1 > N2 > N3){
        printf ("Ordem crescente");
    }
    return 0;
}