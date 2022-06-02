#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("The number of digits you want in the number:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(char));
    char str[n];
    printf("Enter the number for which you want to check the palindrome:\n");
    getchar();
    gets(str);
    int num;
    num = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[n - i - 1])
        {
            num++;
            continue;
        }
        else
        {
            break;
        }
    }
    if (num == n)
    {
        printf("Its a pallindrome\n");
    }
    else
    {
        printf("Its not a pallindrome\n");
    }

    return 0;
}