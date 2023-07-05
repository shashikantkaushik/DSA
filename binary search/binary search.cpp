//
//  binary search.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//

int binarysearch(int arr[], int n, int k) {
  int low=0;int high=n-1;
  
  while(low<=high){
        int mid = low + (high - low) / 2;
      if(arr[mid]==k){
          return mid;
      }
      if(arr[mid]<k){
          low=mid+1;
          
      }
      if(arr[mid]>k){
          high=mid-1;
      }
  }
  return -1;
}
