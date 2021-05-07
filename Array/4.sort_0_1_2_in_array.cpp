//	Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
//	
//	Expected Time Complexity: O(N)
//	Expected Auxiliary Space: O(1)
//	
//	
//	Constraints:
//	1 <= N <= 10^6
//	0 <= A[i] <= 2



// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
 
//User function Template for C

void sort012(int a[], int n)
{
    int i, c_0 = 0,c_1 = 0, c_2 = 0 ;
    for(i = 0 ; i<n ; i++) {
        switch(a[i]){
            case 0 :
                c_0++;
                break;
            case 1 :
                c_1++;
                break;
            case 2 :
                c_2++;
                break;
        }
    }
    
    for(i =0; i<n; i++) {
        if(i >= 0 && i <c_0)    
            a[i] = 0;
        else if(i >= c_0 && i < c_1 + c_0)
            a[i] = 1;
        else
            a[i] = 2;
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
  
//	Different approch using low mid and high variables
//  https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
