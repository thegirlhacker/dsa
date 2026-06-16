 // #include <stdio.h> is used to include the standard input/output library in C, which allows us to use functions like printf for output.
 #include <stdio.h>
 
 // int main is the entry point of the program
 int main()
 {
    // Basic array declaration and initialization
    int arr[5] = {1, 2, 3, 4, 5};
    //int f = 6.2;
    for (int i = 4; i >= 0; i--) {
        
        //accessing array elements
        printf("Element %d: %d %f %d\n", i, i, f ,  arr[i]);
    }
    return 0;
 }

//float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
// printf("Element %d: %.1f\n", i, arr[i]);
// //%.1f is used to format the float output to one decimal place
char arr[5] = {'a', 'b', 'c', 'd', 'e'};
// printf("Element %d: %c\n", i, arr[i]);
// //%c is used to format the char output

 Asking input from user to fill the array
// int arr[5];
// printf("Enter 5 integers:\n");
// for (int i = 0; i <5; i++) {
//     scanf("%d", &arr[i]);
// }
// printf("You entered:\n");
// for (int i = 0; i < 5; i++) {
//     printf("Element %d: %d\n", i, arr[i]);
// }

// // 2d array declaration and initialization
// int arr[2][3] = {{1, 2, 3}, 
//                  {4, 5, 6}};
// 
// for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 3; j++) {
//         printf("Element [%d][%d]: %d\n", i, j, arr[i][j]);
//     }
// }   
// // we can also declare a 2D array without initialization and fill it with user input
// // int arr[2][3];
// // printf("Enter 6 integers for a 2D array (2 rows and 3 columns):\n");
// // for (int i = 0; i < 2; i++) {
// //     for (int j = 0; j < 3; j++) {
// //         scanf("%d", &arr[i][j]);
// //     }
// // }
// // printf("You entered:\n");
// // for (int i = 0; i < 2; i++) {
// //     for (int j = 0; j < 3; j++) {
// //         printf("Element [%d][%d]: %d\n", i, j, arr[i][j]);
// //     }
// // }   

