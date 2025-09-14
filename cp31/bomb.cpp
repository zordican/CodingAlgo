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
        int a, b , n;
        cin >> a >> b >> n;

        vector<int> v(n);

        for(auto& it : v){
            cin >> it;
        }

        int ans = b;

        for(int i = 0; i < n; i ++){
            ans += min(v[i], a - 1);
        }

        cout << ans << "\n";
    }
    return 0;
} 
