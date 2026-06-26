int maxElement(int arr[],int n)
{
    if(n==1)
        return arr[0];

    int maxRest=maxElement(arr,n-1);

    if(arr[n-1]>maxRest)
        return arr[n-1];

    return maxRest;
}

// Tree
// max(5)

// max(4)

// max(3)

// max(2)

// max(1)
// |
// 10

// Returning:

// max(2)

// compare

// 50 vs 10

// return 50
// max(3)

// compare

// 30 vs 50

// return 50
// max(4)

// compare

// 80 vs 50

// return 80
// max(5)

// compare

// 20 vs 80

// return 80

// Answer:

// 80