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

        for(auto & it : v){
            cin >> it;
        }

        bool isSorted = true;

        for(int i = 1; i < n; i++){
            if(v[i] >= v[i-1])continue;
            else{
                isSorted = false;
                break;
            }
        }
        ((isSorted || k > 1) ? cout << "YES" << "\n" : cout << "NO" << "\n");
    }
    return 0;
} 
//humlog ko non decreasing dekhna hai