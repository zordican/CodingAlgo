#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    vector<pair<int,int>> v = {{1,2},{2,3},{1,3}};

    sort(v.begin(),v.end(),cmp);

    for(auto i:v) cout<<i.first<<" "<<i.second<<endl;
}