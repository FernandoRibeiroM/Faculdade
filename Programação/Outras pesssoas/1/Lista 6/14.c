#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float R, area, volume;
    scanf(" %f", &R);
    calc_esfera(R, &area, &volume);
    printf("\nRaio = %.3f\nArea = %.3f\nVolume = %.3f\n", R, area, volume);
    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = (4 * (3.14) * (pow(R, 2)));
    *volume = ((4 / 3) * (3.14) * (pow(R, 3)));
}