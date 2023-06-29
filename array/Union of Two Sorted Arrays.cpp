//
//  Union of Two Sorted Arrays.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
   vector<int> solve;
   int i = 0;
   int j = 0;
   while (i < n && j < m) {
       if (arr1[i] == arr2[j]) {
           if (solve.empty() || solve.back() != arr1[i]) {
               solve.push_back(arr1[i]);
           }
           i++;
           j++;
       } else if (arr1[i] < arr2[j]) {
           if (solve.empty() || solve.back() != arr1[i]) {
               solve.push_back(arr1[i]);
           }
           i++;
       } else {
           if (solve.empty() || solve.back() != arr2[j]) {
               solve.push_back(arr2[j]);
           }
           j++;
       }
   }
   while (i < n) {
       if (solve.empty() || solve.back() != arr1[i]) {
           solve.push_back(arr1[i]);
       }
       i++;
   }
   while (j < m) {
       if (solve.empty() || solve.back() != arr2[j]) {
           solve.push_back(arr2[j]);
       }
       j++;
   }
   return solve;
}
