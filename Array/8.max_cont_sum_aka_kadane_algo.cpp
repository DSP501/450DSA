//	Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
//	Expected Time Complexity: O(N)
//	Expected Auxiliary Space: O(1)
//	
//	 
//	
//	Constraints:
//	1 = N = 10^6
//	-10^7 = A[i] <= 10^7

//	Explanation: 

//	The simple idea of Kadane's algorithm is to look for all positive contiguous segments of the array
//	(max_end is used for this). And keep track of maximum sum contiguous segment among all positive 
//	segments (max is used for this). Each time we get a positive-sum compare it with max and
//	update max if it is greater than max


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max = INT_MIN, max_end = 0;
        
        for(int i =0; i<n; i++) {
            max_end += arr[i];
            
            if(max < max_end)
                max = max_end;
            if(max_end < 0)
                max_end = 0;
        }
        return max;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
  
  



