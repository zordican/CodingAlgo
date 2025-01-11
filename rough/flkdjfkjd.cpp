#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	cin>>t;
	
	while(t--){
	    int N;
	    int M;
	    
	    cin>>N>>M;
	    
	    string arr1;
        string arr2;
	    
	    cin>>arr1;
	    
	    cin>>arr2;
	    
	    
	    int l = 0;
	    int r = M-1;
	    
	    int minimum = INT_MAX;
	    
	    while(r<N){
	        int k = 0;
	       
	        int count = 0;
	        for(int i = l;i<=r;i++){
	        if(arr1[i]==arr2[k])count++;
	        k++;
	        }
	        l++;
	        r++;
	        minimum = min(count,minimum);
	    }
	    
	    cout<<minimum<<endl;
	    
	    
	}

}

