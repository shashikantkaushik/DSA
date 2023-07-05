//
//  Swap and Maximize  Swap and Maximize  Swap and Maximize  Swap and Maximize Swap and Maximize Swap and Maximize swap and maximize.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//
//Given an array a[ ] of N elements. Consider array as a circular array i.e. element after an is a1. The task is to find maximum sum of the absolute difference between consecutive elements with rearrangement of array elements allowed i.e. after any rearrangement of array elements find |a1 – a2| + |a2 – a3| + …… + |an-1 – an| + |an – a1|.
long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    int res=0;
    for(int i=0;i<n;i++){
     res=res+(abs(arr[i]-arr[n-1-i]));
    }
    return res;
}
