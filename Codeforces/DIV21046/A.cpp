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
        int r1, k1, r2, k2;
        cin >> r1 >> k1 >> r2 >> k2;
        int canDo = true;

        int maxi = max(r1,k1);
        int mini = min(r1,k1);
        if(maxi > 2 * (mini + 1)) canDo = false;

        r2-=r1;
        k2-=k1;

        int maxi2 = max(r2,k2);
        int mini2 = min(r2,k2);
        if(maxi2 > 2 * (mini2 + 1))canDo = false;


        (canDo?cout << "YES" << "\n" : cout << "NO" << "\n");
    }
    return 0;
} 
