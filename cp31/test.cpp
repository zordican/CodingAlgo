#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

// long long nCr(int n, int r) {
//     return round(tgamma(n + 1) / (tgamma(r + 1) * tgamma(n - r + 1)));
// }

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
   
    while (t--) {
        int n, minDays, maxTemp;
        cin >> n >> minDays >> maxTemp;
        vector<int> arr(n);
        for(auto& it:arr){
            cin>>it;
        }

        vector<int> v;
        // v.push_back(69);
        int currFreq = 0;

        for(auto it : arr){
            if(it <= maxTemp)currFreq++;
            else{
                if(currFreq)v.push_back(currFreq);
                currFreq = 0;
            }
        }
        if(currFreq)v.push_back(currFreq);

        // for(auto it : v){
        //     cout << it << " ";
        // }
        // cout << "\n";
        int ans = 0;
        for(auto it : v){
            if(it >= minDays){
                for(int r = minDays; r <= it; r++){
                    // cout<<n<<" "<<r<<"\n";
                    ans += it - r + 1;
                    // cout << ans << " ";
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
} 
