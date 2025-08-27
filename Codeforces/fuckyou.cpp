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
        vector<int> oko(4);
        for(auto& it : oko){
            cin >> it;
        }
        vector<pair<int,int> > p;
        p.push_back({oko[1],oko[2]});

        cout<<oko[0] << oko[1]<<p[0].second ;
    }
    return 0;
} 
