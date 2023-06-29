//
//  Move all zeroes to end of array.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//Move all zeroes to end of array

void pushZerosToEnd(int arr[], int n) {
        // code here
        pos=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
                swap(arr[i],arr[pos++]);
        }
    }
