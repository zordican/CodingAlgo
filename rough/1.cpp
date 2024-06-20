#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
      vector<vector<int>> visited(4, vector<int>(5,0));
        
        for(int i = 0; i < visited.size(); i++){
            for(int j = 0; j<visited[0].size();j++){
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
}