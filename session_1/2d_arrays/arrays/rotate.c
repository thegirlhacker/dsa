#include<stdio.h>
//  0 , 1 , 2 , 3 , 4 , 5 , 6 , 7
// after rotation
//  1 , 2 , 3 , 4 , 5 , 6 , 7 , 0
// 0 - n-1
// after rotation of 2 times
//  2 , 3 , 4 , 5 , 6 , 7 , 0 , 1
int main()
{
    int n, arr[100];

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int temp = arr[0];

    for(int i=0;i<n-1;i++)
        arr[i] = arr[i+1];

    arr[n-1] = temp;

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}