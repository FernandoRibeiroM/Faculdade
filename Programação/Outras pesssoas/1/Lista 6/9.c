#include <stdio.h>
#include <string.h>

int ocorre(char *str1, char *str2);

int main()
{
    char str1[100], str2[100];
    int x;
    fflush(stdin);
    fgets(str1, 100, stdin);
    fflush(stdin);
    fgets(str2, 100, stdin);
    x = ocorre(&str1, &str2);
    if (x == 0)
    {

        printf("\nNao ocorre\n");
    }
    else
    {

        printf("\nOcorre\n");
    }
    return 0;
}

int ocorre(char *str1, char *str2)
{

    char str3[100];
    int t = strlen(str2), i;
    char *p;
    for (i = 0; i < t; i++)
    {
        p = strchr(str1, str2[i]);

        str3[i] = *p;
    }
    str3[t] = '\0';
    if (!strcmp(str3, str2))
    {

        return 1;
    }
    else
    {

        return 0;
    }
}