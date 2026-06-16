//Problem Statement

//Write a C program to add two matrices of the same order.
#include<stdio.h>

int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int r;
    int col;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &col);

    printf("Enter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Sum Matrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}