#include<stdio.h>

/*
problem statement:
input should be a number and output should be the multiplicstion table of this.
*/

int main()
{
   int n;
   printf("The number whose multiplication table is needed is\n");
   scanf("%d", &n);

   printf("%d x 1 = %d\n",n, n*1);
   printf("%d x 2 = %d\n",n, n*2);
   printf("%d x 3 = %d\n",n, n*3);
   printf("%d x 4 = %d\n",n, n*4);
   printf("%d x 5 = %d\n",n, n*5);
   printf("%d x 6 = %d\n",n, n*6);
   printf("%d x 7 = %d\n",n, n*7);
   printf("%d x 8 = %d\n",n, n*8);
   printf("%d x 9 = %d\n",n, n*9);
   printf("%d x 10 = %d\n",n, n*10);

    /* code */
    return 0;
}

