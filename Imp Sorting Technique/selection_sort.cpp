//
//  selection_sort.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 04/07/23.
//

void selectionSort(vector<int>& arr, int n)
{
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
