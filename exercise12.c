#include <stdio.h>
#include <string.h>
#include <time.h>

int RandomNumber()
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    char str[30], name[30];
    int n, m, x;
    int a = 0, b = 0;
    printf("Lets play rock, papper and scissors\n");
    printf("Enter your name:\n");
    gets(name);
    printf("How many rounds do you want to play\?\n");
    scanf("%d", &x);

    printf("Lets play \nRock, papper or scissors\?\n");
    getchar();

    for (int i = 0; i < x; i++)
    {
        gets(str);
        if (strcmp(str, "rock") == 0)
        {
            m = 0;
        }
        else if (strcmp(str, "paper") == 0)
        {
            m = 1;
        }
        else if (strcmp(str, "scissor") == 0)
        {
            m = 2;
        }
        else
        {
            printf("Invalid Answer Please Try Again\n");
        }
        n = RandomNumber();

        if (m == 0)
        {
            if (n == 1)
            {
                printf("Computer Wins\n");
                b++;
            }
            else if (n == 2)
            {
                printf("%s wins\n", name);
                a++;
            }
            else if (n == 0)
            {
                printf("Draw\n");
            }
        }
        else if (m == 1)
        {
            if (n == 0)
            {
                printf("%s wins\n", name);
                a++;
            }
            else if (n == 1)
            {
                printf("Draw\n");
            }
            else if (n == 2)
            {
                printf("Computer Wins\n");
                b++;
            }
        }
        else if (m == 2)
        {
            if (n == 0)
            {
                printf("Computer Wins\n");
                b++;
            }
            else if (n == 1)
            {
                printf("%s wins\n", name);
                a++;
            }
            else if (n == 2)
            {
                printf("Draw\n");
            }
        }
    }
    printf("Final score:\n");
    printf("%d : %d\n", a, b);

    if (a == b)
    {
        printf("Draw... please play again\n");
    }
    else if (a > b)
    {
        printf("%s wins.... nice one\nPlease play again", name);
    }
    else if (b > a)
    {
        printf("computer wins..... better luck next time\nPlease play again");
    }

    return 0;
}