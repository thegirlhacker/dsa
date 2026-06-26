int isSorted(int arr[],int n)
{
    if(n==1)
        return 1;

    if(arr[n-1]<arr[n-2])
        return 0;

    return isSorted(arr,n-1);
}