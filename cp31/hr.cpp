#include <bits/stdc++.h>
using namespace std;

int countDistinctRoutes(string plan, int n, int start_zone, int end_zone) {
    const int MOD = 1'000'000'007;
    int m = (int)plan.size();
    for (char &c : plan) if (c == 'L') c = 'l'; else if (c == 'R') c = 'r';

    vector<array<int,2>> nxt(m + 1);
    int lastL = -1, lastR = -1;
    for (int i = m; i >= 0; --i) {
        nxt[i][0] = lastL;
        nxt[i][1] = lastR;
        if (i > 0) {
            char c = plan[i - 1];
            if (c == 'l') lastL = i - 1;
            else if (c == 'r') lastR = i - 1;
        }
    }

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = m; i >= 0; --i) {
        for (int z = 0; z <= n; ++z) {
            long long ways = (z == end_zone) ? 1 : 0;
            int j = nxt[i][0];
            if (j != -1 && z > 0) ways += dp[j + 1][z - 1];
            j = nxt[i][1];
            if (j != -1 && z < n) ways += dp[j + 1][z + 1];
            dp[i][z] = (int)(ways % MOD);
        }
    }
    return dp[0][start_zone];
}

int main() {
    string plan;
    int n, start_zone, end_zone;
    cin >> plan >> n >> start_zone >> end_zone;
    cout << countDistinctRoutes(plan, n, start_zone, end_zone) << "\n";
    return 0;
}