#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//we used memoization

int fiboOptimized(int n, vector<int> &dp){
    if(n<=1) return n;

    if(dp[n] != -1) return dp[n]; //array mein pehle check kiya taki baar baar compute na karna pade

    return dp[n]=fiboOptimized(n-1, dp) + fiboOptimized(n-2, dp);//array mein store kiya taaki baad mein kaam aaye
}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout << fiboOptimized(n, dp);
}