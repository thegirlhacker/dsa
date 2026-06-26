#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int key;

    scanf("%d",&key);

    int low=0;
    int high=n-1;

    int found=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key)
        {
            found=mid;
            break;
        }

        else if(key<arr[mid])
        {
            high=mid-1;
        }

        else
        {
            low=mid+1;
        }
    }

    if(found==-1)
        printf("Not Found");
    else
        printf("Found at index %d",found);

    return 0;
}