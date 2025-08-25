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
        bool canDo = false;
        unordered_map<int,int> mpp;
        for(auto it : v){
            mpp[it]++;
            if(mpp[it] > 1){
                canDo = true;
                break;
            }
        }
        (canDo ? cout << "YES" << "\n" : cout << "NO" << "\n");
    }
    return 0;
} 
