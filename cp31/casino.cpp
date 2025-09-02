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
     int n , m;
     cin >> n >> m;
    vector<priority_queue<int> > pq(m);

     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int it;
            cin >> it;
            pq[j].push(it);
        }
     }
     vector<vector<int> > v(n,vector<int>(m,-1));

       for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int top = pq[j].top();
            pq[j].pop();
            v[i][j] = top;
            }
        }
        
        vector<long long> sum(n);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                sum[i] += (long long)v[i][j];
            }
        }
        long long ans = 0;
        for(int i = 0; i < n - 1; i++){
            for(int j = i+1; j < n; j++){
                ans += sum[i] - sum[j];
            }
        }

        cout << ans << "\n";
    }
    return 0;
} 
