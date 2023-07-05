//
//  Ceil The Floor.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//Given an unsorted array Arr[] of N integers and an integer X, find floor and ceiling of X in Arr[0..N-1].
//
//Floor of X is the largest element which is smaller than or equal to X. Floor of X doesn’t exist if X is smaller than smallest element of Arr[].
//
//Ceil of X is the smallest element which is greater than or equal to X. Ceil of X doesn’t exist if X is greater than greatest element of Arr[].

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int floorIndex = -1;
    int ceilingIndex = -1;
sort(arr,arr+n);
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            floorIndex =arr[ mid];
            ceilingIndex =arr[ mid];
            break;
        } else if (arr[mid] < x) {
            floorIndex = arr[mid];
            low = mid + 1;
        } else {
            ceilingIndex =arr[ mid];
     high=mid-1;
        }
    }

    return make_pair(floorIndex, ceilingIndex);
}
