#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool minDenomination(int index, int& count){
    if(index<0)return 0;
    if(index==0)return 1;

    // if(minDenomination(index-100,count)==true){
    // // cout<<"100"<<endl;
    // count++;
    // return true;}
    if(minDenomination(index-20,count)==true){
         count++;
    // cout<<"20"<<endl;
    return true;}
    if(minDenomination(index-10,count)==true){
         count++;
    // cout<<"10"<<endl;
    return true;}
    if(minDenomination(index-5,count)==true){
         count++;
    // cout<<"5"<<endl;
    return true;}
    if(minDenomination(index-1,count)==true){
         count++;
    // cout<<"1"<<endl;
    return true;}

    return false;
}

int main()
{
    int n;
    
    cin>>n;

    int count = n/100;
    n=n%100;
    
    bool ans = minDenomination(n, count);
    cout<<count;
    

}