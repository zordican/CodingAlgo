#include <iostream>
#include <string>
#include <cstring>
using namespace std;

long long count_super_primes(long long n) {
    if (n == 0) return 0;
    string s = to_string(n);
    int len = s.size();
    long long dp[2][16] = {0};
    dp[1][0] = 1;
    
    for (int i = 0; i < len; i++) {
        int digit = s[i] - '0';
        long long new_dp[2][16] = {0};
        for (int tight = 0; tight < 2; tight++) {
            for (int mask = 0; mask < 16; mask++) {
                if (dp[tight][mask] == 0) continue;
                int upper = tight ? digit : 9;
                for (int d = 0; d <= upper; d++) {
                    int new_tight = (tight && (d == digit)) ? 1 : 0;
                    int new_mask = mask;
                    if (d == 2) new_mask |= 1;
                    if (d == 3) new_mask |= 2;
                    if (d == 5) new_mask |= 4;
                    if (d == 7) new_mask |= 8;
                    new_dp[new_tight][new_mask] += dp[tight][mask];
                }
            }
        }
        memcpy(dp, new_dp, sizeof(new_dp));
    }
    return dp[0][15] + dp[1][15];
}

long long solve(long long L, long long R) {
    return count_super_primes(R) - count_super_primes(L-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        long long L, R;
        cin >> L >> R;
        cout << solve(L, R) << '\n';
    }
    return 0;
}