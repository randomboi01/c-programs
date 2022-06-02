#include <stdio.h>


int main()
{
    int p, q;
    printf("How many rows do want in matrix 1\?\n");
    scanf("%d", &p);
    printf("How many columns do you want in matrix 1\?\n");
    scanf("%d", &q);
    int matrix1[p][q];

    // for matrix 2
    printf("The matrix must have %d rows\n", q);
    int r;
    printf("How many columns do you want in matrix 1\?\n");
    scanf("%d", &r);
    int matrix2[q][r];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter value at (%d, %d):", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("Enter value at (%d, %d):", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    int sum, matrix[p][r];
    sum = 0;

    for (int i = 0; i < p; i++)
    {
        for (int k = 0; k < r; k++)
        {
            for (int j = 0; j < q; j++)
            {
                sum += matrix1[i][j] * matrix2[j][k];
            }
            matrix[i][k] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int k = 0; k < r; k++)
        {
            printf("%d\t", matrix[i][k]);
        }
        printf("\n");
    }
    return 0;
}