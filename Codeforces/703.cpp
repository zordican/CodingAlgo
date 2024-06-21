#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long sum = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(n==1)cout<<"YES"<<endl;
       else if(sum>((n-1)*(n-2))/2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}