//
//  remove duplicate from sorted arrray.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//

int remove_duplicate(int arr[],int n){
    if (n == 0)
        return 0;

    int k = 1; // Index to track the position for next unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[k - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
}
