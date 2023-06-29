//
//  Check if array is sorted.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//

//Check if array is sorted
bool arraySortedOrNot(int arr[], int n) {
     for (int i=1; i<n; i++) {
           if (arr[i-1] > arr[i]) return false;
       }
       return true;
   }
