#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int z=0;

    // Find first zero
    while(z<n && arr[z]!=0)
        z++;

    int nz=z+1;

    while(nz<n)
    {
        if(arr[nz]!=0)
        {
            int temp=arr[z];
            arr[z]=arr[nz];
            arr[nz]=temp;

            z++;
        }

        nz++;
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}