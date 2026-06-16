//Problem Statement

//Write a C program to find the sum of diagonal elements of a square matrix.

#include<stdio.h>

int main()
{
    int a[10][10], n, sum=0;

    printf("Enter order of square matrix: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
    {
        sum += a[i][i];
    }

    printf("Diagonal Sum = %d", sum);

    return 0;
}