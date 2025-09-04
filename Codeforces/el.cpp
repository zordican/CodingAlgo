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
    long long mod = 1e9 + 7;
    while (t--) {
        long long n;
        cin >> n;

        long long a = 1;
        long long b = 1;

        long long currMult = 1;
        long long currSum = 1;
        for(long long i = 1; i < n; i ++){
            b++;
            currMult = (b * a) % mod;             
            currSum = (currSum + currMult) % mod;
            a++;
            currMult = (b * a) % mod;                
            currSum = (currSum + currMult) % mod;
        }
        cout << (currSum * 2022)%mod << "\n";
    }
    return 0;
} 
