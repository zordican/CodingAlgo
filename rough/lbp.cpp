//lower bound >= x
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target){
    int n = arr.size();
    int low = 0;
    int high  = arr.size() - 1;
    int ans = n;
    int mid;

    while(low <= high){
        mid = low + (high - low) / 2;

        if(arr[mid] < target){
            // ans = mid;
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,4,35,43,64,76,34,45};
    sort(arr.begin(), arr.end());
    for(auto it : arr){
        cout << it << " ";
    }
    cout<<endl;
    cout<<lowerBound(arr, 77)<<endl;
}