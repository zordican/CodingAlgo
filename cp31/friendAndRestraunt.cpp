#include <bits/stdc++.h>
#include <set>
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
        vector<int> x(n),y(n);
        int ans = 0;
        for(auto& it : x){
            cin >> it;
        }

         for(auto& it : y){
            cin >> it;
        }

        multiset<int> m;

        for(int i = 0; i < n; i++){
            m.insert(y[i] - x[i]);
        }

        while(m.size() > 1){
            auto it = *m.begin(); //derefrencing to get the value
            m.erase(m.begin());

            auto lb = m.lower_bound(-it); //uss se just bda ya wohi value de dega

            if(lb == m.end()){
                continue;
            }
            // cout << *lb << " " << it <<"\n";
            ans++;
            m.erase(lb);
        }
        // cout << endl;
        cout << ans << "\n";
    }
    return 0;
} 
