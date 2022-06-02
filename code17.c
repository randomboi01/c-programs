#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    printf("The amount of int space you need is:\n");
    int n;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("The loop for feeding in numbers is starting.\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The number is %d\n", ptr[i]);
    }
    free(ptr);
    return 0;
} 