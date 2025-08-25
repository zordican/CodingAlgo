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
        vector<long long> v(n);

        for(auto& it : v){
            cin >> it;
        }
        sort(v.begin(),v.end());

        long long ans = 0;

        if(n&1)ans+=v[0];

        for(int i = n - 2; i >= 0; i-=2){
            ans+=max(v[i],v[i+1]);
        }
        cout << ans << "\n";
    }
    return 0;
} 
