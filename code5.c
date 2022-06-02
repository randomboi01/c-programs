#include<stdio.h>

int main()
{
    int i, age;

    for (i = -2; i;i++)
    {
        printf("%d\nEnter your age:\n",i);
        scanf("%d",&age);
        if (age>18){
        break;
        }
    }
    return 0;
}
