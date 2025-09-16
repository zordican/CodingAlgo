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
        int n , k;

        cin >> n >> k;

        if(!(n&1))cout << "YES" << "\n";
        else if(k&1 && n>=k)cout << "YES" << "\n";
        else cout << "NO" << "\n"; 
    }
    return 0;
} 
