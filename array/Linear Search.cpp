//
//  Linear Search.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//

int searchInSorted(int arr[], int N, int K)
{

 for(int i=0;i<N;i++){
     if(arr[i]==K){
         return 1;
     }
 }
 return -1;
   
}
