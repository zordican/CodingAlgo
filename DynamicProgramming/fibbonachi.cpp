#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibbonachi(int n, vector<int>& dp){
    if(n<2) return n;
    if(dp[n] != -1)return dp[n];
    
    return dp[n] = fibbonachi(n-1,dp ) + fibbonachi(n-2,dp);
}

int main(){
    int n = 9;

    vector<int> dp(n + 1,-1);

    int x = fibbonachi(n, dp);
    
    cout<<x<<endl;
}