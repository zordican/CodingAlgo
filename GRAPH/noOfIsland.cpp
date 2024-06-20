#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
void dfs(int i,int j,vector<vector<int>>& visited , vector<vector<char>>& grid){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())return;
    if(visited[i][j])return;
    if(grid[i][j]=='0')return;

    visited[i][j]=1;
    
    dfs(i+1,j,visited,grid);
    dfs(i-1,j,visited,grid);
    dfs(i,j+1,visited,grid);
    dfs(i,j-1,visited,grid);
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int column = grid[0].size();
        int count = 0;

        vector<vector<int>> visited(row, vector<int>(column,0));
        
        for(int i = 0; i < visited.size(); i++){
            for(int j = 0; j<visited[0].size();j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs(i,j,visited,grid);
                    count++;
                }
            }
        }


        return count;
    }
};

int main()
{
}