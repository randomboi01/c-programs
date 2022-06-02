#include <stdio.h>

//conversion of units 
//inputs km, in, cm, pound, in ---- miles, ft, in, kg, m
int main()
{
    float km, in, cm, pound;
    int num;
    printf("Select the unit you want to convert:\n");
    printf("Select 1 for km, 2 for in, 3 for cm, 4 for pound\n");
    scanf("%d",&num); 
    if (num==1)
    {
        printf("You have selected conversion from km to miles.\n");
        printf("Enter value:\n");
        scanf("%f",&km);
        printf("%f km = %f miles\n", km, 0.62*km);

    }
    else if (num==2)
    {
        float n;
        printf("You have selected conversion from in.\n");
        printf("Enter value of inches:\n");
        scanf("%f", &in);
        printf("What do you want to contert in to\?\n");
        printf("Select 1 for ft or 2 for m.\n");
        scanf("%d", &n);
        if (n==1)
        {
            printf("%f in = %f ft", in, in/12);
        }
        else if (n==2)
        {
            printf("%f in = %f m", in, 0.0254*in);
        }
        else
        {
            printf("Invalid Response");
        }
        
    }
    else if (num==3)
    {
        printf("You have selected conversion from cm to in.\n");
        printf("Enter value:\n");
        scanf("%f",&cm);
        printf("%f cm = %f in\n", cm, 0.39*cm);
    }
    else if (num==4)
    {
        printf("You have selected conversion from pound to kg.\n");
        printf("Enter value:\n");
        scanf("%f",&pound);
        printf("%f pounds = %f kg\n", pound, 0.45*pound);
    }
    else
    {
        printf("Invalid Response\n");
    }
    
    
    return 0;
}