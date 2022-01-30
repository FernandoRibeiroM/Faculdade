#include <stdio.h>

int superFatorial(int n)
{
    int sf = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sf *= j;
        }
    }
    return sf;
}
int main()
{
    int num;
    printf("Insira um numero natural: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Valor invalido! Insira novamente um numero inteiro maior que 0: ");
        scanf("%d", &num);
    }
    int sf = superFatorial(num);
    printf("\nsf(%d) = %d\n", num, sf);
    return 0;
}
