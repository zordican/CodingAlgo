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
    long long  = 1e9 + 7;
    while (t--) {
        long long n;
        cin >> n;

        // long long a = 1;
        // long long b = 1;

        // long long currMult = 1;
        // long long currSum = 1;
        // for(long long i = 1; i < n; i ++){
        //     b++;
        //     currMult = (b * a) % mod;             
        //     currSum = (currSum + currMult) % mod;
        //     a++;
        //     currMult = (b * a) % mod;                
        //     currSum = (currSum + currMult) % mod;
        // }
        long long ans = 337 % MOD;
        ans = (ans * (n % MOD)) % MOD;
        ans = (ans * ((n + 1) % MOD)) % MOD;
        ans = (ans * ((4 * n - 1) % MOD)) % MOD;

        cout << ans << "\n";
    }
    return 0;
} 
//337⋅𝑛(𝑛+1)(4𝑛−1)(mod109+7)