//Problem Statement

//Write a C program to find transpose of a matrix.

#include<stdio.h>

int main()
{
    int a[10][10], r, c;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix:\n");

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Transpose Matrix:\n");

    for(int j=0;j<c;j++)
    // j = 3
    {
        for(int i=0;i<r;i++)

        // r=2
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}