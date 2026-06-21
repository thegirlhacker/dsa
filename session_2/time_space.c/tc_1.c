// What is this time if we increment the number by 2?

#include<stdio.h>
int main()
{
   int arr[10], n;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter the elements:\n");
   for(int i=0; i<n; i++)
      scanf("%d", &arr[i]);

   printf("Elements with increment of 2:\n");
for(int i=0; i<n; i+=2)
   printf("%d ", arr[i]);

    return 0;
}

// Time complexity: O(n/2) -> O(n) We approximate it
// 
// Space complexity: O(n)