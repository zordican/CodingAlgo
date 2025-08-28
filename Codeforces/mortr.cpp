#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
        cin >> n;
	    vector<int> v(n);
	    
	    for(auto& it:v){
	        cin >> it;
	    }
	    
	    vector<vector<int>> mat(n, vector<int>(n,0));
	    
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            if(i <= j){
	                for(int k = i; k <= j; k++){
	                    mat[i][j]+=v[k];
	                }
	            }
	            else mat[i][j] = mat[j][i];
	        }
	    }
	    
	       for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            cout << mat[i][j] << " ";
	        }
	        cout << endl;
	    }
	}

}