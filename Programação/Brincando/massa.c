#include <stdio.h>
#include <math.h>
int main()
{
  float peso, gravidade, massa;
  printf("Qual seu peso:");
  scanf("%f", &peso);
  gravidade = 9.807;
  massa = peso / gravidade;
  printf("Sua massa e: %f", massa);
  return 0;
}
