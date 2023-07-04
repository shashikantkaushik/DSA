//
//  Superior Elements or Leader in Array.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 04/07/23.
//

vector<int> superiorElements(vector<int>&a) {
   vector<int> ans;
   int maxi=INT_MIN;
   int n=a.size();
   for(int i=n-1;i>=0;i--){
       if(a[i]>maxi){
           ans.push_back(a[i]);
       }
       maxi=max(maxi,a[i]);
   }
   sort(ans.begin(),ans.end());
   return ans;
   }
