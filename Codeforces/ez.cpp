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
        vector<string> s(3);

        for(auto& it : s){
            cin >> it;
        }

        for(int i = 0; i < 3; i++){
            cout << s[i][0];
        }
        cout << "\n";
    }
    return 0;
} 
