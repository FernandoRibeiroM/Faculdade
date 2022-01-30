#include <stdio.h>

float Fahrenheit(float n)
{
    float F = n * (9.0 / 5.0) + 32.0;
    return F;
}
int main()
{
    float c, f;
    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &c);
    f = Fahrenheit(c);
    printf("\nCelsius: %.2f = Fahrenheit: %.2f.\n", c, f);
    return 0;
}
