//
//  Count the subarrays having product less than k.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//


//Count the subarrays having product less than k
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            
            if(a[i]<k)
            ans++;
        
            long long num=a[i];
            for(int j=i+1;j<a.size();j++)
            {
                num*=a[j];
                if(num<k)
                ans++;
                else
                break;
            }
        }
    
        
        return ans;
    }
