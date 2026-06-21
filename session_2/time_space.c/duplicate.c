//find duplicate in an array
#include <stdio.h>
 int arr[15];

int main()
{
    for(int i=0;i<15;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
   bool flag = false;
   
    for(int i=0;i<15;i++)
    {
        for(int j=i+1;j<15;j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
                printf("Duplicate element is: %d\n",arr[i]);
                break;
            }
        }
    }

    if(!flag)
    {
        printf("No duplicate elements found.\n");
    }

    return 0;
}
// Time complexity: O(n^2)
// Space complexity: O(1)