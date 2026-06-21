int arr[]={10,20,30};

int *p=arr;

p++;

printf("%d",*p);

// Output:

// 20

// Because:

// Initially p → arr[0]

// p++

// Now p → arr[1]