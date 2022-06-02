#include <stdio.h>


int main()
{
    int a = 3;
    int *ptr_a = &a;
    ptr_a++;
    
    printf("%d\n", ptr_a);
    printf("%d\n", ptr_a+1);
    return 0;
}