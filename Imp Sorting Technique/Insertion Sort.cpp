//
//  Insertion Sort.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 04/07/23.
//

#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
