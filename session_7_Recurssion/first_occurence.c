int firstOcc(int arr[],int n,int idx,int key)
{
    if(idx==n)
        return -1;

    if(arr[idx]==key)
        return idx;

    return firstOcc(arr,n,idx+1,key);
}

// Input:

// 1 5 3 5 7

// key=5

// Dry Run

// firstOcc(0)

// arr[0]=1

// not found

// call index 1
// firstOcc(1)

// arr[1]=5

// found

// return 1

// Answer:

// 1