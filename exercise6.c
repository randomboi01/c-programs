#include <stdio.h>

int main()
{
    int num;
    printf("Select which kind of star pattern you want:\n");
    printf("Select 1 for regular pattern and 2 for reversed pattern\n");
    scanf("%d", &num);
    if (num==1)
    {
        int n;
        printf("Enter the number of star pattern lines you want:\n");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++)
            {
                printf("%c",'*');
            }
            printf("\n");
        }
    }
    else if (num==2)
    {
        int p;
        printf("Enter the number of star pattern lines you want:\n");
        scanf("%d", &p);
        for (int a = 0; a < p; a++)
        {
            for (int b = 1; b <= (p-a); b++)
            {
                printf("%c",'*');
            }
            printf("\n");
            
        }
    }
    else
    {
        printf("INVALID VALUE, PLEASE TRY AGAIN\n");
    }

   
    return 0;
}