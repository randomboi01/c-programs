#include<stdio.h>

int main()
{
    int a;
    printf("the subjects you pssed in\?\n");
    printf("enter 1 for only maths, 2 for only physics and 3 for both maths and physics\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You recieve rs 15\n");
        break;
    case 2:
        printf("You recieve rs 15\n");
        break;    
    case 3:
        printf("You recieve rs 45\n");
        break;
    default:
    printf("invalid input\n");
        break;
    }
    return 0;
}
