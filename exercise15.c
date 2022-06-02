#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct details
{
    char name[34];
    char product[34];
    char voice_no[34];
};

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("bill.txt", "a");
    struct details d1;
    printf("Please enter your name\n");
    gets(d1.name);
    printf("Which product of ours do you wish to complain about\?\n");
    gets(d1.product);
    printf("Write the invoice number:\n");
    gets(d1.voice_no);
    //scanf is a broken function and should not be used here

    fprintf(ptr,"This is regarding %s complained to us by %s, having invoice number: %s\n We have looked into your complaints and have decided to replace the product", d1.product, d1.name, d1.voice_no);
    fprintf(ptr, "Thank you for giving us feedback. We would love to be of service again.");
    fclose(ptr);
    return 0;
}