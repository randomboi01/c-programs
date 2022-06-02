#include <stdio.h>
#include <string.h>

struct details{
    char name[34];
    int license_no;
    char route[50];
    float distance;
};

int main()
{
    struct details p1, p2, p3;
    
    printf("Please enter the details for person 1:\n");
    gets(p1.name);
    scanf("%d", &p1.license_no);
    getchar(); // flushes out the extra enter after scanf since gets can handle it
    gets(p1.route);
    scanf("%f", &p1.distance);
    getchar();


    printf("Please enter the details for person 2:\n");
    gets(p2.name);
    scanf("%d", &p2.license_no);
    getchar();
    gets(p2.route);
    scanf("%f", &p2.distance);
    getchar();


    printf("Please enter the details for person 3:\n");
    gets(p3.name);
    scanf("%d", &p3.license_no);
    getchar();
    gets(p3.route);
    scanf("%f", &p3.distance);
    getchar();

    printf("%s %d %s %f\n", p1.name, p1.license_no, p1.route, p1.distance);
    printf("%s %d %s %f\n", p2.name, p2.license_no, p2.route, p2.distance);
    printf("%s %d %s %f\n", p3.name, p3.license_no, p3.route, p3.distance);

    return 0;
}