#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main()
{
    float n, fra;
    int in;
    scanf(" %f", &n);
    frac(n, &in, &fra);
    printf("\nNumero = %f\nParte inteira = %d\nParte fracionaria = %f", n, in, fra);
    return 0;
}

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = num;
    *frac = num - (*inteiro);
}