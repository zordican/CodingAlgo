#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    //we will use the concept of path visited
  private:
    bool dfs(int start , vector<int>& vis , vector<int>& pathVis , vector<int> adj[]){
        if(vis[start] && pathVis[start])return true; //same path pe visit karna chaiye
        if(vis[start])return false;
        
        vis[start] = 1;
        pathVis[start] = 1;
        
        for(auto it:adj[start]){
            if(dfs(it , vis , pathVis , adj)==true)return true;
        }
        pathVis[start] = 0;
        return false; 
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> pathVis(V,0);
        
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(dfs(i , vis , pathVis , adj)==true)return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
}