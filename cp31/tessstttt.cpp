#include <bits/stdc++.h>
using namespace std;

vector<int> grabMedians(vector<int> nums, int windowSize) {
    sort(nums.begin(), nums.end());
    
    int total = nums.size();
    int mid = (windowSize - 1) / 2;
    
    int smallestMed = nums[mid];
    int largestMed = nums[total - windowSize + mid];
    
    vector<int> out;
    out.push_back(largestMed);
    out.push_back(smallestMed);
    
    return out;
}