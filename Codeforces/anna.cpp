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
        int a, k, c;

        cin>> a >> k >> c;

        ((a + c/2 + c%2 > k + c/2) ? cout << "First" << "\n" : cout << "Second" << "\n");
    }
    return 0;
} 
