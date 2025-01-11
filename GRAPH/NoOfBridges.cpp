#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    int t = 0;
private:

    void dfs(int node,int parent,vector<int>& vis,vector<int>& tin,
        vector<int>& low,vector<vector<int>>& adj,vector<vector<int>>& ans){
            
        vis[node]=1;
        tin[node] = t;
        low[node] = t;
        t++;

        for(auto it : adj[node]){

            if(it==parent)continue; //we wont be checking the parent

            if(!vis[it]){

                dfs(it,node,vis,tin,low,adj,ans);

                low[node]=min(low[node],low[it]); //backtracking 

                if(tin[node]<low[it]){
                    ans.push_back({node,it}); //storing if bridge is there 
                }

            }

            //agar visited hai to sirf low ko dekh lo
            else{
                low[node] = min(low[node],low[it]);
            }

        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);

        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);

        }
        vector<int> vis(n,0);
        vector<int> tin(n);
        vector<int> low(n);
    
        vector<vector<int>> ans;

        dfs(0,-1,vis,tin,low,adj,ans);

        return ans;

    }
};

int main()
{

}