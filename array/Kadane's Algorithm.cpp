//
//  Kadane's Algorithm.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

long long maxSubarraySum(int arr[], int n){
     
     long long sum=0;
     long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(sum,maxi);
    
    if(sum<0){
          sum=0;
      }
    }
     return maxi;
 }
