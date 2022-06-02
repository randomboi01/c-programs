#include <stdio.h>
#include <string.h>


int main()
{
    char str1[50], str3[50];
    char str2[] = " is a friend of ";
    //puts(str2);
    gets(str1);
    gets(str3);
    //char a[70];
    //strcat(str2,str3);
    //strcat(str1, strcat(str2,str3));
    puts(strcat(str1, strcat(str2,str3)));
    //printf("%s is a friend of %s\n",str1, str3);
    return 0;
}