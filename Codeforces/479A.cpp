#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,times;
    cin>>num>>times;
    while(times--){
        if(num%10)num=num-1;
        // cout<<num<<" "<<endl;}
        else num=num/10;
        // cout<<num<<endl;}
    }
    cout<<num<<endl;
}