#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l = 0;
        int r = k;
        int flag = false;
        
         map<int, int> mpp;
        
        for (int i = l; i <= r; i++) { //storing value in map
            mpp[nums[i]]++;
        }

       
        while (r < nums.size()) {
            flag = false;
            
            for (int i = l; i <= r; i++) {
                cout<<mpp[nums[i]]<<" ";
                if (mpp[nums[i]] > 1) {
                    flag = true;
                }
            }
            if(flag == true)
                return true;

            mpp[nums[l]]--;
            l++;
            r++;
            if(r<nums.size())mpp[nums[r]]++;
            
           
            cout<<endl<<"Right wala ko badhane ke baad: "<<mpp[nums[r]];
            cout<<endl;
        }

        return false;
    }

int main()
{
    vector<int> nums = {1,2,3,1,2,3};
    containsNearbyDuplicate(nums,2);
}