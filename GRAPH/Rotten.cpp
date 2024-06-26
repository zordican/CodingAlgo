// good example of dfs
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int vis[n][m];
    queue<pair<pair<int, int>, int>> q; //important

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
            else
                vis[i][j] = 0;
        }
    }

    int maxt = 0;

    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        q.pop();

        maxt = max(t, maxt);

        int delrow[] = {1, 0, -1, 0};
        int delcol[] = {0, 1, 0, -1};

        for (int i = 0; i < 4; i++)
        {
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];
            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == 1 && vis[nrow][ncol] != 1)
            {
                vis[nrow][ncol] = 1;
                grid[nrow][ncol] = 2;
                q.push({{nrow, ncol}, t + 1});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
                return -1;
        }
    }

    return maxt;
}

int main()
{

}