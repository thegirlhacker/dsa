//Problem Statement

//Write a C program to multiply two matrices.

#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter Matrix A:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication not possible.");
        return 0;
    }

    printf("Enter Matrix B:\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<r1;i++)
    // r1 -> 0-2
    {
        for(int j=0;j<c2;j++)
        //c2 -> 0-3
        {
            c[i][j] = 0;
    
            for(int k=0;k<c1;k++)
            //c1 = 3 
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result Matrix:\n");

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}