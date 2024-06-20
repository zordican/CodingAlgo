#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        for(int i = 0;i<4;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        int sum1 = v[1]+v[2];
        sort(v.begin(),v.end());
        if(sum1==(v[3]+v[2]))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}