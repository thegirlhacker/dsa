# include <stdio.h>
    
    int main()
    {
        int n;
        scanf("%d", &n);
        printf("Enter %d integers:\n", n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }


        int flag = 1;
      
  
        

        for (int i = 0; i < n - 1; i++) {
            //flag = 1
            if (arr[i] > arr[i + 1]) {
                flag = 0;
                break;
            }
        }
    

    if (flag) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;

    }