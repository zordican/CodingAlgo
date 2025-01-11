#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int legs;
        cin>>legs;

        int remaining = legs%4;

        int ans = legs/4;

        if(remaining>1)ans++;

        cout<<ans<<endl;
    }
}
