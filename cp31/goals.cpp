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

        int sum = 0;

        for(int i = 1; i < n; i++){
            int it;
            cin >> it;

            sum += it;
        }

        cout << -sum << "\n";
    }
    return 0;
} 
