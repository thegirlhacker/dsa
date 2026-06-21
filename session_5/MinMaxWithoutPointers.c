#include<stdio.h>

int findMin(int arr[],int n)
{
    int min=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    return min;
}

int findMax(int arr[],int n)
{
    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    return max;
}

int main()
{
    int arr[]={5,2,9,1,7};

    int min=findMin(arr,5);
    int max=findMax(arr,5);

    printf("Min=%d\n",min);
    printf("Max=%d",max);

    return 0;
}