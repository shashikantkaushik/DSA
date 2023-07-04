//
//  Longest consecutive subsequence  Longest consecutive subsequence  Longest consecutive subsequence  Longest consecutive subsequence Longest consecutive subsequence.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 04/07/23.
//
//Longest consecutive subsequence
int findLongestConseqSubseq(int arr[], int N)
    {
     unordered_set<int>s;
     for(int i=0;i<N;i++){
         s.insert(arr[i]);
     }
     int ans=0;
     for(int i=0;i<N;i++){
         if(s.find(arr[i]-1)!=s.end()){
             continue;
         }
         else{
             int count=0;
             int current=arr[i];
             while(s.find(current)!=s.end()){
                 count++;
                 current++;
             }
             ans=max(count,ans);
         }
         
     }
     return ans;
    }
