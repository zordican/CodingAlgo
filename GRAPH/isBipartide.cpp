//using bfs
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool check(int start, vector<vector<int>>& graph, vector<int>& vis, vector<int>& colorNodes ) {
        int nodes = graph.size();
        int color = 6;

        queue<pair<int,int>> q;
        q.push({start,6});
        vis[start]=1;
        colorNodes[start] = 6;

        
        while(!q.empty()){
            int node = q.front().first;
            int color = q.front().second;
            q.pop();
            for(auto it:graph[node]){
                if(vis[it]){
                    if(color == colorNodes[it])return false;
                }
                if(!vis[it]){
                    vis[it]=1;
                    colorNodes[it] = (color==6)?9:6;
                    q.push({it,colorNodes[it]});
                }
            }
        }
        return true; //even a single node is bipartide

    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> vis(graph.size(),0);
        vector<int> colorNodes(graph.size(),0);

        for(int i = 0; i<graph.size();i++){ //we needed to do this because there may be provinces
            if(!vis[i]){
                if(check(i,graph,vis,colorNodes)==false)return false;
            }
            
        }
        return true;
    }
};

int main()
{

}