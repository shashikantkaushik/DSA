//
//  Find the element that appears once.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//Find the element that appears once

int search(int A[], int N){
    for(int i=0;i<N;i++){
        if(i==0){
            if(A[i]!=A[i+1]){
            return A[i];
        }
        }
         if(i!=0){
        if(A[i]!=A[i-1] && A[i]!=A[i+1]){
            return A[i];
        }
        }
    
        
    }
    }
