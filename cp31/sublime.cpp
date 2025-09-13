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
        int x, n;

        cin >> x >> n;

        if(n&1)cout << x << "\n";
        else cout << 0 << "\n";
    }
    return 0;
} 
