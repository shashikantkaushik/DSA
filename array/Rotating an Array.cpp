//
//  Rotating an Array.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 04/07/23.
//Given an array of size N. The task is to rotate array by //D elements where D ≤ N.

void leftRotate(int arr[], int n, int d) {
    vector<int>temp(n);
    int i;
    for( i=0;i<n-d;i++){
       temp[i]=arr[i+d];
    }
for(int j=0;i<n;i++){
        temp[i]=arr[j];
 j++;
 }
 for(int k=0;k<n;k++){
        arr[k]=temp[k];
 
 }
 }
