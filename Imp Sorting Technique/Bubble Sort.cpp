//
//  Bubble Sort.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 04/07/23.
//

#include <bits/stdc++.h>
void bubbleSort(vector<int>& arr, int n)
{
   
  for(int i=1;i<n;i++){
       bool swapee=false;
      for(int j=0;j<n-i;j++){
          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapee=true;
          }
      }
      if(swapee==false)
      break;
  }
}
