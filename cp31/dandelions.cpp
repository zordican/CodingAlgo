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

        int ans = 0;

        int numOdd = 0;

        priority_queue<int> pq;

        for(auto it : v){
            // cout << it << " ";
            if(it&1){pq.push(it);numOdd++;}
            else ans += it;
        }
        if(!numOdd){
            cout << 0 << "\n";
            continue;
        }
        if(!pq.empty())
        {ans+=pq.top();
        pq.pop();
        numOdd--;}
        for(int i = 0; i < numOdd/2; i++){
            ans += pq.top();
            pq.pop();
        }

        
        cout << ans << "\n";
    }
    return 0;
} 
//initially off rhega