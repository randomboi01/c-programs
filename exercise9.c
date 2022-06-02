#include <stdio.h>
#include <string.h>

void parser(char string[], int n)
{
    printf("%s\n", string);
    for (int i = 5; i < n-6; i++)
    {
        printf("%c", string[i]);
    };
}

int main()
{
    char str[100] /*= "<h1> This is a heading </h1>"*/;
    int n;
    gets(str);
    n = strlen(str);
    printf("%d\n", n);


    parser(str, n);
    return 0;
}