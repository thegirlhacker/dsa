//Problem Statement

//Write a C program to find the largest element in an array.
#include<stdio.h>

int main()
{
    int n, arr[100];

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int max = arr[0];
    int max = INT_MIN;
    int min = INT_MAX;
    // INT_MAX = 2147483647
    // INT_MIN = -2147483648
 // 1 , 2 , - 2 , - 9 , -1000
 
    for(int i=1;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
        // max = 2
    }

    printf("Largest element = %d", max);

    return 0;
}
// a = 3
// b = 4
// finally a = 4 , b = 3
int temp = a; temp = 3 
a = b;   a = 4 
b = temp;   b = 3

b = a b =3 
a = b 