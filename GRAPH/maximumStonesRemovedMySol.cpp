#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    class DisjointSet {

public: 
    vector<int> rank, parent, size; 

    DisjointSet(int n) {
       // Initialize the rank, parent, and size arrays
        rank.resize(n+1, 0); 
        parent.resize(n+1);
        size.resize(n+1); 

        // Initialize each node as a parent of itself
        for(int i = 0;i<=n;i++) {
            parent[i] = i; 
            size[i] = 1; 
        }
    }

    int findUPar(int node) {
        if(node == parent[node])
            return node; 
        return parent[node] = findUPar(parent[node]); // Path compression optimization
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v; 
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u; 
        }
        else {
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
        }
    }
}; 

    int removeStones(vector<vector<int>>& stones) {
        int row = 0;
        int col = 0;


        for(auto it:stones){
            row = max(it[0],row);
            col = max(it[1],col);
        }

        DisjointSet ds((row+1)*(col+1));

        vector<vector<int>> matrix(row+1,vector<int>(col+1,0));



        for(auto it:stones){
            int r = it[0];
            int c = it[1];
            matrix[r][c] = 1;
        }

        for(int curRow = 0; curRow < row; curRow++){
            for(int curCol = 0; curCol < col; curCol++){
                if(matrix[curRow][curCol]==1){

                    for(int i = 0; i<col;i++){
                        if(matrix[i][curCol]==1){
                            ds.unionBySize(curRow*col+curCol,i*col+curCol);
                        }

                    }
                    for(int i = 0; i<row;i++){
                        if(matrix[curRow][i]==1){
                            cout<<curRow<<" "<<i<<endl;
                            ds.unionBySize(curRow*col+curCol,curRow*col+i);
                        }

                    }
                }
            }
        }

       set<int> st;

       for(int curRow = 0; curRow < row; curRow++){
            for(int curCol = 0; curCol < col; curCol++){

                if(matrix[curRow][curCol]==1){
                    st.insert(ds.findUPar(curRow * col + curCol));
                }        

             }
        }

        int max = 0;

        cout<<ds.size[ds.findUPar(0)]<<endl;

        for(auto it:st){
            cout<<it<<endl;
            max+=ds.size[it]-1;
        }
        return max;
    }
};

int main() {
    vector<vector<int>> v = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
    Solution obj;
    int ans = obj.removeStones(v);
    cout << ans << endl; // Should output 4 for the given grid
}
