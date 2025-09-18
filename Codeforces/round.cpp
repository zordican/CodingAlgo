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

        int ans = 0;
        while(n > 0){
            if(n/10 == 0){
                ans += n;
                n = n/10;
            }
            else{
                ans += 9;
                n = n/10;
            }
        }
        cout << ans << "\n";
    }
    return 0;
} 
