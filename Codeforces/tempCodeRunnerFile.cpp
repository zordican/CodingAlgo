#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a;
        cin>>a;

        int sum;

        sum+=a%10;
        a=a/10;
        sum+=a%10;

        cout<<sum<<endl;
    }
}