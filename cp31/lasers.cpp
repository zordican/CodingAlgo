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
        int n,m,x,y;

        cin >> n >> m >> x >> y;

        vector<int> v1(n), v2(m);

        for(auto & it : v1){
            cin >> it;
        }

         for(auto & it : v2){
            cin >> it;
        }

        cout << n + m << "\n";
    }
    return 0;
} 
