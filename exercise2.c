#include <stdio.h>


int main ()
{
    int subjects;

    printf("which subjects did you pass in\?\n");
    printf("Use 1 for maths, 2 for physics and 3 for both maths and physics\n");
    scanf("%d", &subjects);
    if (subjects == 1){
        printf("You recieve gift A worth rs 15\n");
    }
    else if (subjects==2)
    {
        printf("You recieve gift B worth rs 15\n");
    }
    else if (subjects==3)
    {
        printf("You recieve gift C worth rs45\n");
    }
    return 0;
}
/*so else statements end with a , before { and else if or simple if statements doesnt.
if string variable like 'm' used then direct letters can also be used.*/