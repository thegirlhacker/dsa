#include<stdio.h>

int main()
{
    int arr[]={1,2,3,2,1};

    int n=5;

    int left=0;
    int right=n-1;

    int palindrome=1;

    while(left<right)
    {
        if(arr[left]!=arr[right])
        {
            palindrome=0;
            break;
        }

        left++;
        right--;
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}