#include <stdio.h>


int main()
{
    //printf("Hello World");
    int marks[2][4] = {{3,4,6,7},
                       {1,4,5,6}};
    for (int i = 0; i < 2; i++)
    {
        //printf("enter value of i:\n");
        //scanf("%d", &marks[i]);
        for (int j = 0; j < 4; j++)
        {
            //printf("enter value of j:\n");
            //scanf("%d", &marks[j]);
            printf("%d",marks[i][j]);
        }
        printf("\n");
       //printf("%d\n", &marks[i][j]);   


    }
    
    
    return 0;
}
//matrix already made in defining marks[i][j].