#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;
    printf("The number of employees that are to registered:\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    /*printf("please enter your employee number\n");
    scanf("%d", &ptr[0]);
    printf("your employee id is %d\n", ptr[0]);
    
    printf("enter employee number:\n");
    scanf("%d", &ptr[1]);
    printf("your employee id is %d\n", ptr[1]);

    printf("enter employee number:\n");
    scanf("%d", &ptr[2]);
    printf("your employee id is %d\n", ptr[2]);
    free(ptr);*/

    for (int i = 0; i < n; i++)
    {
        printf("Enter employee number for employee %d:\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The employee numbers for employee %d is %d\n",i+1, ptr[i]);
    }
    
    return 0;
}


