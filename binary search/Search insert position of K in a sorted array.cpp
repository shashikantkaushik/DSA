//
//  Search insert position of K in a sorted array.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//
//
//Search insert position of K in a sorted array
//EasyAccuracy: 38.99%Submissions: 50K+Points: 2
//Sharpen up your programming skills, participate in coding contests & explore high-paying jobs
//
//Given a sorted array Arr[](0-index based) consisting of N distinct integers and an integer k, the task is to find the index of k, if its present in the array Arr[]. Otherwise, find the index where k must be inserted to keep the array sorted.
//

int searchInsertK(vector<int>Arr, int N, int k)
    {
       int low=0;
       int high=N-1;
       int index=-1;
       while(low<=high){
           int mid=low+(high-low)/2;
           if(Arr[mid]==k){
               return mid;
           }
           else if(Arr[mid]<k){
               low=mid+1;
               index=mid+1;
           }
           else{
               high=mid-1;
                      index=mid;
           }
       }
       return index;
    }
