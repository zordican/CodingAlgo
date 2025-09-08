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
        int n, x;

        cin >> n >> x;

        vector<int> v(n);

        for(auto & it : v){
            cin >> it;
        }

        int maxi = INT_MIN;

        maxi = max(maxi, 2*(x - v[n-1]));
        maxi = max(maxi, v[0]);
        for(int i = 1; i < n; i++){
            maxi = max(maxi , v[i] - v[i - 1]);
        }

        cout << maxi << "\n";
    }
    return 0;
} 
