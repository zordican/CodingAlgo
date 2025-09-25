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
        vector<int> v(n);
        for(auto& it : v){
            cin >> it;
        }

        int numZero = 0;
        int neg = 0;

        for(auto it : v){
            if(it == 0)numZero++;
            if(it == -1)neg++;
        }

        cout << (neg%2)*2 + numZero << "\n";
    }
    return 0;
} 
