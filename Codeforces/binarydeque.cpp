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
        int n , s ;
        cin >> n >> s;

        vector<int> v(n);

        for(auto& it : v){
            cin >> it;
        }

        int sum = 0;

        for(auto it : v){
             sum += it;
        }
           
        if(sum < s)cout << -1 << "\n";
        else{
            
        }

    }
    return 0;
} 
