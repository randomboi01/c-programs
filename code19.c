#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    FILE *ptr;
    ptr = fopen("letter.txt", "a");
    //int fgetc(ptr);
    //char c;
    //c = fgetc(FILE*ptr);

    //printf("the character is %c\n", fgetc(ptr));
    //char str[34];
    //printf("the character is %s\n", fgets(str, 5, ptr));
    //fprintf(ptr,"%s","randomboi");
    //fputs("hello bois", ptr);
    char name[5];
    int n;
    gets(name);
    printf("hello world\n");
    digestline();
    scanf("%d", &n);
    fprintf(ptr, "%d %s hello guys\n", n, name);
    fclose(ptr);
    return 0;
}