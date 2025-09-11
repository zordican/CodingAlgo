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
        int n , k; 
        cin >> n >> k;

        vector<int> v(n);
        for(auto& it : v){
            cin >> it;
        }
        bool canBe = false;
        for(auto it : v){
            if(it == k){canBe = true;break;}
        }

        (canBe ? cout << "YES" << "\n" : cout << "NO" << "\n");
    }
    return 0;
} 
