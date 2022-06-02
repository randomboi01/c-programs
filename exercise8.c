#include <stdio.h>
#include <string.h>

struct student_info
{
    char name[40];
    int ID;
    float marks;
};

int main()
{
    struct student_info Rishabh, Ram, Shyam;
    strcpy(Rishabh.name, "Rishabh");
    strcpy(Ram.name, "Ram");
    strcpy(Shyam.name, "Shyam");

    Rishabh.ID = 1;
    Ram.ID = 2;
    Shyam.ID = 3;

    Rishabh.marks = 8.5;
    Ram.marks = 7.5;
    Shyam.marks = 6.5;

    printf("Student info:\n");
    printf("%s %d %f\n", Rishabh.name, Rishabh.ID, Rishabh.marks);
    printf("%s     %d %f\n", Ram.name, Ram.ID, Ram.marks);
    printf("%s   %d %f\n", Shyam.name, Shyam.ID, Shyam.marks);

    
    return 0;
}