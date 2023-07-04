//
//  Sort an array of 0s, 1s and 2s.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

void sort012(int a[], int n){
int low = 0;
 int mid = 0;
 int high = n - 1;

 while (mid <= high) {
     if (a[mid] == 0) {
         swap(a[low], a[mid]);
         low++;
         mid++;
     } else if (a[mid] == 1) {
         mid++;
     } else if (a[mid] == 2) {
         swap(a[mid], a[high]);
         high--;
     }
 }
 }
