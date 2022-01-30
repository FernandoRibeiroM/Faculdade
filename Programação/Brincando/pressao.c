#include <stdio.h>
#include <math.h>
int main()
{
    float forca, area, pressao;
    printf("Digite o valor da for�a:");
    scanf("%f", &forca);
    printf("Digite o valor da area:");
    scanf("%f", &area);
    pressao = forca / area;
    printf("A pressao e: %f", pressao);
    return 0;
}
