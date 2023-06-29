//
//  Second Largest.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//
//second largest in array
int print2largest(int arr[], int n) {

    // code here
    int max=0;
    int min=NULL;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
             min=max;
            max=arr[i];
           
        }
        if(arr[i]>min && arr[i]<max){
            min=arr[i];
           
        }
        
    }
    if(min==NULL){
        return -1;
    }
    else{
        return min;
    }
    
}
