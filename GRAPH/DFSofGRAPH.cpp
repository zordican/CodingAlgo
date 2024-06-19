#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>& visited,vector<int> adj[],vector<int>& ans){
    if(visited[node])return;
    visited[node]=1;
    ans.push_back(node);

    for(auto it:adj[node]){
        dfs(it,visited,adj,ans);
    }
}


int main()
{
    vector<int> v[9];
    v[1]={2,3};
    v[2]={5,6};
    v[3]={1,4,7};
    v[4]={3,8};
    v[5]={2};
    v[6]={2};
    v[7]={3,8};
    v[8]={4,7};

    vector<int> visited(8,0);
    vector<int> ans;

    dfs(1,visited,v,ans);

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}