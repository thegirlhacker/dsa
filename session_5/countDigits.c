#include<stdio.h>

int main()
{
    int n=1234;
    int count=0;

    while(n>0)
    {
        count++;
        n/=10;
    }

    printf("%d",count);

    return 0;
}