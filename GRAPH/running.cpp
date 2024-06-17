#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        bool vis[V];
        vis[0] = 1;
        queue < int > q;
        q.push(0);
        vector<int> bfs;
        cout<<"I am running"<<endl;
        while (!q.empty())
        {
            cout<<"I am also running"<<endl;
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto it:adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                    cout<<"I am also running"<<endl;
                }
            }
        }
        return bfs;
        
    }
// };

int main()
{
   int node=9;
   vector<int> v[8];

   v[0].push_back(1);
   v[0].push_back(5);
   v[1].push_back(0);
   v[1].push_back(2);
   v[1].push_back(3);
   v[2].push_back(1);
   v[3].push_back(1);
   v[3].push_back(4);
   v[4].push_back(3);
   v[4].push_back(6);
   v[5].push_back(6);
   v[5].push_back(7);
   v[5].push_back(0);
   v[6].push_back(5);
   v[6].push_back(4);
   v[7].push_back(5);

   vector<int> temp;

   temp=bfsOfGraph(node,v);

   for(auto it:temp){
    cout<<it<<" ";
   }
   cout<<endl;
}