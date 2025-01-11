//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void dfs(int node, vector<vector<int>>& adj,vector<int>& vis,stack<int>& q){
	    if(vis[node])return;
	    vis[node] = 1;
	    
	    for(auto it:adj[node]){
	        dfs(it,adj,vis,q);
	    }
	    
	    q.push(node);
	}
	
	void dfs3(int node,vector<int>& vis,vector<int> adjT[]){
	    vis[node] = 1;
	    for(auto it:adjT[node]){
	        if(!vis[it]){
	            dfs3(it,vis,adjT);
	        }
	    }
	}
	
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        stack<int> q;
        vector<int> vis(V,0);
       
       for(int i = 0;i<V;i++){
           if(!vis[i]){
               dfs(i,adj,vis,q);
           }
       } 
       
       vector<int> adjT[V];
       
       //reversing the nodes
       for(int i = 0;i<V;i++){
           vis[i] = 0;
           for(auto it : adj[i]){
               adjT[it].push_back(i);
           }
       }
        //counting the strongly connected components
       int scc = 0;
       while(!q.empty()){
           int  node = q.top();
           q.pop();
           if(!vis[node]){
               scc++;
               dfs3(node,vis,adjT);
           }
       }
       return scc;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends