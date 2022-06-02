#include <stdio.h>


int main()
{
    int i, num, j;
    label: printf("You are in label\n");
    
    printf("Hello World\n");
    for ( i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for ( j = 0; j < 5; j++)
        {
            printf("%d\n", j);
            scanf("%d", &num);
        if (num == 4){
        goto label;
        }
        
        
        }
    }
    end:
    
    return 0;
}

//goto statement example
// to write end:- end:
