// cakculate T.C
 int c = 0;
 for(int i = 0 ; i< n ; i++){
     for(int j = i+1 ; j< n ; j++){
         c++;
     }
 }
 // if i = 0, j = 1 to n-1 -> n-1 times
    // if i = 1, j = 2 to n-1 -> n-2 
    // if i = 2, j = 3 to n-1 -> n-3
    // if i = 3, j = 4 to n-1 -> n-4
        ...
    // if i = n-1, j = n to n-1 -> 0 times
    // 
    // total number of iterations = (n-1) + (n-2) + (n-3) + ... + 1 + 0 = n(n-1)/2
    