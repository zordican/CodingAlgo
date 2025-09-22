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
        int x , y;
        cin >> x >> y;

        if(y == x)cout << -1 << "\n";
        else if(y > x)cout << 2 << "\n";
        else if(y == 1)cout << -1 << "\n";
        else if(x - y > 1)cout << 3 << "\n";
        else cout << - 1 << "\n";
    }
    return 0;
} 
