#include <stdio.h>

void soma(int *n1, int *n2);

int main()
{

    int n1, n2;
    scanf(" %d %d", &n1, &n2);
    soma(&n1, &n2);
    printf("\n%d\n%d", n1, n2);
    return 0;
}

void soma(int *n1, int *n2)
{

    *n1 = (*n1) + (*n2);
}