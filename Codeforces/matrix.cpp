#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--){
        int n;
        int k;

        cin>>n>>k;

        vector<vector<int>> matrix(n,vector<int>(n,0));

        for(int i = 0; i<n;i++){
            for(int j = 0; j<n;j++){
                int temp;
                cin>>temp;
                matrix[i][j] = temp;
            }
        }

        vector<vector<int>> ans(n/k,vector<int>(n/k,0));

        for(int i = 0; i<n; i+=k){
            for(int j = 0; j<n; j+=k){
                int row = i/k;
                int col = j/k;
                ans[row][col] = matrix[i][j];
            }
        }

        for(int i = 0; i<n/k;i++){
            for(int j = 0; j<n/k;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}