#include <stdio.h>

/*int fib_recursions (int n){
    if (n == 0 || n == 1)
    return n;
    else return (fib_recursions(n-1) + fib_recursions(n-2));
}*/
//nth term is (n+1)th term




int fib_iterative (int n){
    int a=0, b=1;
    for (int i = 0; i < n; i++)
    {
        int sum;
        sum = a+b;
        printf("%d\n", sum);
        //now
        a = b;
        b = sum;

    
    }
  //nth term is the (n+2)th term   
}
    


int main()
{
    fib_iterative(41);
    //printf("%d", fib_recursions(42));
    return 0;
}
