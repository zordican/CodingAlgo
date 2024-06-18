#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    vector<int> bfsOfGraph(int V, vector<int>& adj[])
    {
        bool vis[V];
        vis[0] = 1;
        queue < int > q;
        q.push(0);
        vector<int> bfs;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto it:adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
        
    }

int main()
{
   int node=9;
   vector<int> v[8];

    v[0]={1,5};
    v[1]={0,2,3};   
    v[2]={1};   
    v[3]={1,4};   
    v[4]={3,6};   
    v[5]={6,7,0};   
    v[6]={5,4};   
    v[7]={5};   

   vector<int> temp;

   temp=bfsOfGraph(node,v);

   for(auto it:temp){
    cout<<it<<" ";
   }
   cout<<endl;

   return 0;
}

//graph is not working in vs code, use online compiler