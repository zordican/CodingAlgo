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
        int k;

        cin >> n >> k;

        vector<int> prods(n), disc(k);

        for(auto & it : prods){
            cin >> it;
        }

        for(auto & it : disc){
            cin >> it;
        }

        sort(prods.begin(),prods.end());
        sort(disc.begin(), disc.end());

        int ans = 0;
        int itr = n - 1;
        
            for(auto it : disc){
                if(itr - it >= -1){
                    for(int i = 0; i < it - 1; i++){
                        ans += prods[itr - i];
                        // cout << ans << " ";
                    }
                    itr -= it;
                }
                else{
                    break;
                }
            }
        // cout << endl << itr;
        while(itr >= 0){
            ans += prods[itr];
            // cout << "i am running";
            itr--;
        }
        // cout << endl << itr;
        cout << ans << "\n";
    }
    return 0;
} 
