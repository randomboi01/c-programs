#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myfunc(){
    int a = 5;
    return &a;
}

int main()
{
    int *ptr;
    //printf("%d", *ptr);//wild pointer

    //char str = "hello";
    //printf("%p\n", &str);
    ptr = (int*)malloc(4*sizeof(char));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;

    free(ptr);
    //printf("%d\n", *ptr);//dangling pointer

    //int* b = myfunc();
    //printf("%d\n", *b); 
    {
        int i = 5;
        //ptr = &i;
        //printf("%d\n", *ptr);
    }
    //printf("%p\n", ptr);

    return 0;
}