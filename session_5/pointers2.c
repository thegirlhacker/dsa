//Function needs to return two values.
#include<stdio.h>

void findMinMax(int arr[],int n,int *min,int *max)
{
    *min=arr[0];
    *max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<*min)
            *min=arr[i];

        if(arr[i]>*max)
            *max=arr[i];
    }
}

int main()
{
    int arr[]={5,2,9,1,7};

    int min,max;

    findMinMax(arr,5,&min,&max);

    printf("Min=%d\n",min);
    printf("Max=%d",max);

    return 0;
}