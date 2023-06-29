//
//  Largest Element in Array.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//
//Largest Element in Array
int largest(int arr[], int n) {
    int j=-9999;
    for(int i=0;i<n;i++){
        if(arr[i]>j){
            j=arr[i];
        }
    }
    return j;
}
