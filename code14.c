#include <stdio.h>

void changevalue(int *d){
    *d = 74;
}

void add_subtract(int *a, int *b){
    int temp;
    temp = *a;
    *a = *a + *b;
    *b = temp - *b;
}

int main()
{
    int a=43, b=72;
    printf("%d and %d\n", a, b);
    //changevalue(&a);
    add_subtract(&a, &b);
    printf("%d and %d\n",a, b);
    return 0;
}