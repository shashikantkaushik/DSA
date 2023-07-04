//
//  Left Rotate an Array by One.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 04/07/23.
//

#include <bits/stdc++.h>
 vector<int> rotateArray(vector<int>& arr, int n)
 {
     int temp = arr[0];
     for(int i=1; i<n; i++){
             arr[i-1] = arr[i];
               }

   arr[n-1] = temp;
     return arr;
      }
