//
//  34. Find First and Last Position of Element in Sorted Array.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//

int firstocc(vector<int> nums , int target)
{
    int start = 0;
    int end = nums.size() -1;
    int mid = start + (end - start)/2;
      int value = -1;
    while(start <= end)
    {
        if(nums[mid] == target)
        {
            value = mid ;
            end = mid -1;
            // store the value and go to the left
        }
        else if ( nums[mid] > target  )
        {
            end = mid-1;
        }
        else if (nums [mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return value;
}

int lastocc(vector<int> nums , int target)
{
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end - start)/2;
      int value = -1;
    while(start <= end)
    {
      
        if(nums[mid] == target)
        {
            value = mid ;
            start = mid +1;
            // store the value and go to the right
        }
        else if ( nums[mid] > target  )
        {
            end = mid-1;
        }
        else if (nums [mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return value;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector <int> ans;
     ans.push_back(firstocc(nums, target));
     ans.push_back(lastocc(nums,target));
     return ans;
    }
};
