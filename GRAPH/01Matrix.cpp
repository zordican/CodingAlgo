#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

        int row = mat.size();
        int column = mat[0].size();
        vector<vector<int>> ans(row, vector<int>(column, INT_MAX));//initialising everyhting is important
        vector<vector<int>> vis(row, vector<int>(column, 0));//initialising
        queue<pair<pair<int, int>, int>> q;

        //visiting every zero and marking the distance as zero
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (mat[i][j] == 0) {
                    vis[i][j] = 1;
                    q.push({{i, j}, 0});
                } else
                    vis[i][j] = 0;
            }
        }

        //doing a bfs
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int dist = q.front().second;
            q.pop();

            int delrow[] = {1, 0, -1, 0};
            int delcol[] = {0, 1, 0, -1};

            ans[r][c] = dist; //storing the distance

            for (int i = 0; i < 4; i++) {
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];
                if (nrow >= 0 && ncol >= 0 && nrow < row && ncol < column &&
                    vis[nrow][ncol] == 0 && mat[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, dist + 1});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return ans;
    }
};

int main()
{

}