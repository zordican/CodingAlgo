#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n; 
        cin>>n;

        map<char,int> mpp;

        string input;

        cin>>input;

        for(auto it : input){
            if(it == '?')continue;
            else mpp[it]++;
        }

            int max_score = 0;

        for(auto it : mpp){
            if(it.second <= n) max_score += it.second;
            else if(it.second > n) max_score += n;
        }

        cout<<max_score<<endl;
    }
}

