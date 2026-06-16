#include<stdio.h>

int main()
{
    int arr[] = {1,0,0,1,1,0,0,1};
    int n = 8;

    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        while(arr[left] == 0 && left < right)
            left++;

        while(arr[right] == 1 && left < right)
            right--;

        if(left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    printf("Modified Array:\n");

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}