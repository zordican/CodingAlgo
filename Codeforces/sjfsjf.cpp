#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n ,s,m;
        cin>>n>>s>>m;
        vector<int> v(m+1,0);
        bool ans = false;
        while(n--){
            int a,b;
            cin>>a>>b;

            for(int i = a+1; i<=b+1; i++){
                v[i] = 1;
            }

        }

        for(int i = 1; i<=m;i++){
            v[i]+=v[i-1];
        }

        int left = 1;
        int right = s-1;

        while(right<=m){
            if(v[right]-v[left-1]==0){
                cout<<"YES"<<endl;
                ans = true;
                break;
            }
            left++;
            right++;
        }
        if(!ans){
            cout<<"NO"<<endl;
        }

    }
}