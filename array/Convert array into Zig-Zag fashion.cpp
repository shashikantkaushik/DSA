//
//  Convert array into Zig-Zag fashion.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form:

//arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

void zigZag(int arr[], int n) {
  
 sort(arr,arr+n);
       for(int i=1, j=2; i<n && j<n ; i+=2, j+=2){
        swap(arr[i],arr[j]);
    }
}
};
