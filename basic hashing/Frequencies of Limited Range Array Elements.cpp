//
//  Frequencies of Limited Range Array Elements.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

void frequencyCount(vector<int>& arr,int N, int P)
   {
      map<int,int>mpp;
       for(int i=0;i<N;i++){
           mpp[arr[i]]++;
       }
       for(int i=0;i<N;i++){
           arr[i]=mpp[i+1];
       }
   }
