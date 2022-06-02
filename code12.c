#include <stdio.h>


int main()
{
    printf("Hello World\n");
    int a = 23;
    int * ptr_a = &a;
    printf("%x\n", ptr_a);
    printf("%x\n",&a);
    printf("%d\n", *ptr_a);
    return 0;
}
