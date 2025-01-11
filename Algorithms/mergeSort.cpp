#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MergeSort {
private:
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> tmp;
        int ptr1 = low;
        int ptr2 = mid+1;

        while(ptr1 <= mid && ptr2 <= high){
            if(nums[ptr1] <= nums[ptr2]){
                tmp.push_back(nums[ptr1]);
                ptr1++;
            }
            else{
                tmp.push_back(nums[ptr2]);
                ptr2++;
            }
        }

        while(ptr1 <= mid){
            tmp.push_back(nums[ptr1]);
            ptr1++;
        }

        while(ptr2 <= high){
            tmp.push_back(nums[ptr2]);
            ptr2++;
        }

        for(int i = low; i <= high; i++){
            nums[i] = tmp[i - low];
        }
    }

    void mergeSort(vector<int>& nums,int low,int high){
        if(low == high)return;

        int mid = (low + high)/2;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);

        merge(nums, low, mid, high);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);

        return nums;
    }
};

int main()
{

}