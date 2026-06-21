#include<stdio.h>

int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }

    return a;
}

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    int lcm=(a*b)/gcd(a,b);

    printf("%d",lcm);

    return 0;
}