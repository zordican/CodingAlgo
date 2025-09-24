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
        int x, k;
        cin >> x >> k;

        if(x < k)cout << 1 << "\n" << x << "\n";
        else if(x%k == 0)cout << 2 << "\n" << 1 << " " << x - 1 << "\n";
        else cout << 1 << "\n" << x << "\n";

    }
    return 0;
} 
