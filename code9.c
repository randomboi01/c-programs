#include<stdio.h>

/*float Percentage(int x,int y) 
{ 
	float perct; 
	perct = ((x+y)/200.0)*100.0; // Definition of Function 
	return perct  //return is used orelse the function here would just calculate the percentage and keep it to themselves.
    // alternate would be to just define it with another variable.
}*/

float Percentage (int x, int y)
{
    float a;
    a = ((x+y)/(float)200)*100;
    printf("%f",a);
}



int main()
{
    //float a;

    Percentage (45,5);
    //printf("%f\n", Percentage);
    return 0;
}
