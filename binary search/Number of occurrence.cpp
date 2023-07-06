//
//  Number of occurrence.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//

//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int nums[], int n, int target) {

    int start = 0;
    int end = n -1;
    int mid = start + (end - start)/2;
      int first = -1;
    while(start <= end)
    {
        if(nums[mid] == target)
        {
            first = mid ;
            end = mid -1;
            // store the value and go to the left
        }
        else if ( nums[mid] > target  )
        {
            end = mid-1;
        }
        else if (nums [mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    


     start = 0;
     end = n-1;
     mid = start + (end - start)/2;
      int second = -1;
    while(start <= end)
    {
      
        if(nums[mid] == target)
        {
            second = mid ;
            start = mid +1;
            // store the value and go to the right
        }
        else if ( nums[mid] > target  )
        {
            end = mid-1;
        }
        else if (nums [mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    
       if(first==-1){
           return 0;
       }
       else{
           return second-first +1;
       }

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
