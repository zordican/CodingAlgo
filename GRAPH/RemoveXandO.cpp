#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 void dfs( int i, int j, vector<vector<int>>& vis, vector<vector<char>>& board ){
     if(i<0 || j<0 || i>=board.size() || j>=board[0].size())return;
     if(board[i][j]=='X')return;
     if(vis[i][j])return;

     vis[i][j] = 1;
     board[i][j]='X';

     dfs(i+1,j,vis,board);
     dfs(i-1,j,vis,board);
     dfs(i,j+1,vis,board);
     dfs(i,j-1,vis,board);

     return;
 }

void visit( int i, int j, vector<vector<int>>& vis, vector<vector<char>>& board ){
    // if(i==0 || j==0 || i==board.size()-1 || j==board[0].size()-1)return;
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size())return;
    if(board[i][j]=='X')return;
    if(vis[i][j])return;

    vis[i][j] = 1;

    visit(i+1,j,vis,board);
    visit(i-1,j,vis,board);
    visit(i,j+1,vis,board);
    visit(i,j-1,vis,board);

    return;
}

void solve(vector<vector<char>>& board) {
    int row = board.size();
    int column = board[0].size();

    vector<vector<int>> visited(row,vector<int>(column,0));
    
    for(int i = 0; i<visited.size();i++){
        for(int j = 0;j<visited[0].size();j++){
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //visiting every border connected island
    for(int i = 0; i<row;i++){
        for(int j = 0;j<column;j++){
           if(i==0 || j==0 || i==board.size()-1 || j==board[0].size()-1){
                if(!visited[i][j] && board[i][j]!='X'){
                    visit(i,j,visited,board);
                }
            }
        }
    }

    for(int i = 0; i<visited.size();i++){
        for(int j = 0;j<visited[0].size();j++){
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i = 0; i<row;i++){
        for(int j = 0;j<column;j++){
                if(!visited[i][j] && board[i][j]!='X'){
                    dfs(i,j,visited,board);
                    cout<<i<<" "<<j<<endl;
                
            }
        }
    }
}

int main()
{
  vector<vector<char>> v={{'O','X','X','O','X'},{'X','O','O','X','O'},{'X','O','X','O','X'},{'O','X','O','O','O'},{'X','X','O','X','O'}};

    for(int i = 0; i<v.size();i++){
        for(int j = 0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;

    solve(v);

    for(int i = 0; i<v.size();i++){
        for(int j = 0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}