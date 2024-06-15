#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void convertToBinary(int n){
     string s;
     while(n!=0){
        if(n%2==1)s+='1';
        else s+='0';
        n=n/2;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}

void convertToString(string s){
    int ans=0;
    for(int i = s.length()-1; i>=0;i--){
        if(s[i]=='1')ans+=pow(2,s.length()-1-i);
    }
    cout<<ans<<endl;
}

int main()
{
    string s;
    cin>>s;
    convertToString(s);
}