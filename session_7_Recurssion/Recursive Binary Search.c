int binarySearch(int arr[],int low,int high,int key)
{
    if(low>high)
        return -1;

    int mid=(low+high)/2;

    if(arr[mid]==key)
        return mid;

    if(key<arr[mid])
        return binarySearch(arr,low,mid-1,key);

    return binarySearch(arr,mid+1,high,key);
}
// Input:

// 10 20 30 40 50

// key=40
// Call 1
// low=0
// high=4

// mid=(0+4)/2

// mid=2
// arr[2]=30

// Need right side.

// binarySearch(3,4)
// Call 2
// low=3
// high=4

// mid=(3+4)/2

// mid=3
// arr[3]=40

// Found.

// Return:

// 3
// Why
// 150