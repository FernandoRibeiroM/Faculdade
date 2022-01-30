#include <stdio.h>

int troca(int *v1, int *v2, int *v3);

int main()
{

    int n1, n2, n3, x;

    scanf(" %d %d %d", &n1, &n2, &n3);
    x = troca(&n1, &n2, &n3);

    printf("\n%d\n%d\n%d\n%d", n1, n2, n3, x);

    return 0;
}
int troca(int *v1, int *v2, int *v3)
{
    int troca, i, maior = *v1;
    if ((*v1) == (*v2) && (*v2) == (*v3))
    {

        return 1;
    }
    else
    {

        for (i = 0; i < 3; i++)
        {

            if ((*v1) > (*v2))
            {

                troca = *v1;
                *v1 = *v2;
                *v2 = troca;
            }

            else if ((*v2) > (*v3))
            {

                troca = *v3;
                *v3 = *v2;
                *v2 = troca;
            }

            else if ((*v1) > (*v3))
            {

                troca = *v3;
                *v3 = *v1;
                *v1 = troca;
            }
        }

        return 0;
    }
}