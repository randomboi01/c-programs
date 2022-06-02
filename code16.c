#include <stdio.h>

int stat(int a)
{
    static int A = 5;
    A++;
    return A;
}

int main()
{
    int n;
    n = stat(n);
    printf("%d\n", n);
    n = stat(n);
    printf("%d\n", n);

    /*int b;
    b = stat();
    printf("%d\n", b);*/
    return 0;
}