#include <stdio.h>


int main()
{
    int num, index=0;
    printf("Enter a number\n");
    scanf("%d", &num);
do
{
    index = index +1;
    printf("%d\n",index);
} while (index < num);



    return 0;
}
//default value of index is 0.
//using increment of a decimal makes it go to an infinite loop.