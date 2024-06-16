#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // vector<int> dp(n+1,-1);

//    dp[0]=0;
//    dp[1]=1;


int prev = 0;
int prev1 = 1;

int curr;

   for(int i = 2; i<=n; i++){
    curr = prev + prev1;
    prev = prev1;
    prev1 = curr;
   }

cout<<curr<<" "<<prev1<<endl;

//    for(auto it:dp){
//     cout<<it<<" ";
//    }
//    cout<<endl;
}