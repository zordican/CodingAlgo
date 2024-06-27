//Bellman ford can be use in graphs having -ve weights and it also helps in detecting -ve cycle

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // *   S: source vertex to start traversing graph with
    // *   V: number of vertices
    
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V,1e8);
        
        dist[S] = 0;
        
        //the bellman ford algo
        for(int i = 0;i<V-1;i++){
            for(auto it:edges){
                int currDist = dist[it[0]];
                int nextDist = dist[it[1]];
                int w = it[2];
                //relaxation
                if(currDist!=1e8 && currDist + w < nextDist){
                    dist[it[1]] = currDist + w;
                }
            }
        }
        //the final bellman for checking negative cycle
        for(auto it : edges){
             int currDist = dist[it[0]];
                int w = it[2];
                int nextDist = dist[it[1]];
                if(currDist!=1e8 && currDist + w < nextDist){
                  return {-1};
                }
        }

        return dist;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src;
        cin >> src;

        Solution obj;
        vector<int> res = obj.bellman_ford(N, edges, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends