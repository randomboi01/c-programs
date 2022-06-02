#include <stdio.h>


int main()
{
    double R, I, V;

    printf("Enter the value of resistance:\n");
    scanf("%lf", R);

    printf("Enter the value of current:\n");
    scanf("%lf", I);

    V = I*R;

    printf("Therefore, the value of voltage is %lf\n", V);
    return 0;
}