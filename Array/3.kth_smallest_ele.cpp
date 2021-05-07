//	Given an array and a number k where k is smaller than the size of the array, 
//	we need to find the k’th smallest element in the given array. 
//	It is given that all array elements are distinct.
//	
//	Expected Time Complexity: O(n)
//	Expected Auxiliary Space: O(1)
//	Constraints:
//	1 <= N <= 10^5
//	1 <= arr[i] <= 10^5
//	1 <= K <= N

//	This problem can be solved in O(n^2) by sorting and returning the ele at kth position but eventually time will increase
//	To optimise it we use the partion function of Quick Sort which finds correct position of ele in the array
//  Its proven that in worst case this algo can take upto O(n^2) but on average complexity is O(n) 


// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
 
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        if(k > 0 && k <= r - l + 1) {
            
            int pos = getPosition(arr, l, r);
            
            if(pos - l == k - 1) 
                return arr[pos];
            
                
            // k is on left of pos
            if(pos - l > k - 1)
                return kthSmallest(arr, l , pos - 1, k);
            
            // k is on right of pos
            return kthSmallest(arr, pos + 1, r, k - pos - 1 + l);
        }
    }
    
    
    void swap(int *x, int *y) {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    
    
    int getPosition(int arr[], int l, int r) {
        int n = r - l + 1;
        int rand_pos = rand()%n;
        swap(&arr[l + rand_pos], &arr[r]);
        return partition(arr, l, r);
    }
    
    int partition(int arr[], int l, int r) {
        int ele = arr[r], i=l;
        for(int j = l; j<=r - 1; j++) {
            if(arr[j] <= ele) {	// to find kth max ele => if(arr[j] >= ele)
                swap(&arr[i], &arr[j]);
                i++;
            }
        }
        swap(&arr[i], &arr[r]);
        return i;
    }
    
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
