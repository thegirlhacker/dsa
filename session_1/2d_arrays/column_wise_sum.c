#include<stdio.h>

int main()
{
    int a[10][10], r, c;

    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int j=0;j<c;j++)
    {
        int sum = 0;

        for(int i=0;i<r;i++)
            sum += a[i][j];

        printf("Sum of Column %d = %d\n", j+1, sum);
    }

    return 0;
}