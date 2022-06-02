#include <stdio.h>


int main()
{
    
    {
        //selection of whether regular of reversed triangular pattern.
        int num;
        printf("Select which kind of star pattern you want:\n");
        printf("Select 1 for regular pattern and 2 for reversed pattern\n");
        scanf("%d", &num);
        if (num==1){
             int n;
            printf("Enter the number of star pattern lines you want:\n");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++){
              for (int j = 1; j <= i; j++)
           {
                printf("%c",'*');
           }
           printf("\n");
        }
        else if (num==2)
        {
            //printf()
            int p;
            for (int i = 0; i < p; i++)
            {
                for (int q = 1; q <=p ; q++)
                {
                    printf("%c", '*');
                }
                
            }
            
        }
        else
        {
            printf("INVALID VALUE, PLEASE TRY AGAIN\n");
        }
        
        
        
           
        
    }
    
    return 0;
}

//star patern
//reverse triangle or simply triangle