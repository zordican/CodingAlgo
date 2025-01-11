#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int size;
        cin>>size;
        vector<int> vec(size);

        for(int i = 0; i<size;i++){
            cin>>vec[i];
        }

        vector<int> v(size+1, 0);

        for(auto it : vec){
            v[it]++;
        }

        sort(v.begin(),v.end(),greater<int>());

        cout<<size - v[0]<<endl;

    }
}