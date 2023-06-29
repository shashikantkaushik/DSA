//
//  Missing Number in array.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 29/06/23.
//

int missingNumber(vector<int>&a, int N) {

int ans=N*(N+1)/2;

int sum=0;
for(int i=0 ; i<N-1 ; i++)
{
sum+=a[i];
}
return ans-sum ;
}
