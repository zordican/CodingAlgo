#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int diff = abs(a-b);
        int ans = (diff/10)+(diff%10);
        cout<<ans<<endl;
    }
    


}