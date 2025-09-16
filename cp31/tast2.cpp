#include <bits/stdc++.h>
using namespace std;

int countBitwisePalindromicPaths(int N, int M, vector<vector<int> > grid) {
    int L = N + M - 1;
    int mid = (L - 1) / 2;
    int mod = 1e9 + 7;
    
    if (grid[0][0] != grid[N-1][M-1]) {
        return 0;
    }
    
    vector<vector<int> > dp_prev(N, vector<int>(N, 0));
    dp_prev[0][N-1] = 1;
    
    for (int k = 1; k <= mid; k++) {
        vector<vector<int> > dp_curr(N, vector<int>(N, 0));
        for (int r1 = 0; r1 < N; r1++) {
            int c1 = k - r1;
            if (c1 < 0 || c1 >= M) continue;
            for (int r2 = 0; r2 < N; r2++) {
                int c2 = M - 1 - (k - (N - 1 - r2));
                if (c2 < 0 || c2 >= M) continue;
                if (grid[r1][c1] != grid[r2][c2]) continue;
                
                long long count = 0;
                // Option1: start down, end up
                if (r1 > 0 && r2 + 1 < N) {
                    count = (count + dp_prev[r1-1][r2+1]) % mod;
                }
                // Option2: start down, end left
                if (r1 > 0 && c2 + 1 < M) {
                    count = (count + dp_prev[r1-1][r2]) % mod;
                }
                // Option3: start right, end up
                if (c1 > 0 && r2 + 1 < N) {
                    count = (count + dp_prev[r1][r2+1]) % mod;
                }
                // Option4: start right, end left
                if (c1 > 0 && c2 + 1 < M) {
                    count = (count + dp_prev[r1][r2]) % mod;
                }
                dp_curr[r1][r2] = count;
            }
        }
        dp_prev = move(dp_curr);
    }
    
    long long ans = 0;
    if (L % 2 == 0) {
        for (int r1 = 0; r1 < N; r1++) {
            for (int r2 = 0; r2 < N; r2++) {
                ans = (ans + dp_prev[r1][r2]) % mod;
            }
        }
    } else {
        for (int r = 0; r < N; r++) {
            ans = (ans + dp_prev[r][r]) % mod;
        }
    }
    
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<vector<int> > grid(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }
    int out_ = countBitwisePalindromicPaths(N, M, grid);
    cout << out_;
    return 0;
}