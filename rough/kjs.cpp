#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        for(auto it : arr){
            if(it == 0){
                ans++;
            }
            else ans+=it;
        }
        cout<<ans<<endl;
    }
};