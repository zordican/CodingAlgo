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
        int n, m;
        cin >> n >> m;

        vector<int> v(n, 0);

        for(int i = 0; i < m; i++){
            int index;
            cin >> index;
            v[index - 1] = 1;
        }

        
    }
    return 0;
} 
