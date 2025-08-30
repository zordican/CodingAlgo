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
        char c; 
        cin >> c;
        string s;
        cin >> s;

        vector<int> v;

        for(int i = 0; i < n; i++){
            if(s[i] != c)v.push_back(i+1);
        }

        // int even = 0;
        // int odd = 0;

        // for(auto it : v){
        //     if(it%2 == 0)even++;
        //     else odd++;
        // }

        if (v.size() == 0) {
            cout << 0 << "\n";
            continue;  
        }

       int xFound = -1;
        for (int x = 1; x <= n; x++) {
            bool ok = true;
            for (int j = x; j <= n; j += x) {
                if (s[j - 1] != c) { 
                    ok = false;
                    break;
                }
            }
            if (ok) {
                xFound = x;
                break;
            }
        }

        if (xFound != -1) {
            cout << 1 << "\n" << xFound << "\n";
        } else {
            cout << 2 << "\n" << n << " " << n - 1 << "\n";
        }
    }
    return 0;
} 
