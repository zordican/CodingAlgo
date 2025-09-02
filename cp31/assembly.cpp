#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
   
    while (t--) {
        int n;
        cin >> n;
        int m = (n*(n-1))/2;
        vector<int> v(m);
        for(auto& it : v){
            cin >> it;
        }
        sort(v.begin(),v.end());

        int l = 0;
        vector<int> ans;
        int maxi = INT_MIN;
        for(int i = 0; i < n - 1; i+=2){
            int temp = max(v[i],v[i + 1] );
            ans.push_back(temp);
            maxi=max(maxi,temp);
        }
        ans.push_back(maxi+1);
        
        for(auto it : v){
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
} 
