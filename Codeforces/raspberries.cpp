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
        int n, k;

        cin >> n >> k;
        vector<int> v(n);

        for(auto & it : v){
            cin >> it;
        }
        if(k != 4){int mini = INT_MAX;

        for(auto it : v){
            if(it % k == 0){
                mini = 0;
                break;

            }
            mini = min(mini,(k - (it%k)));
        }
        cout << mini << "\n";}
        else{
            int mini = INT_MAX;
            int numEven = 0;
            bool canbe = false;
            for(auto it : v){
                mini = min(mini, (k - (it % k)));
                if(it%2 == 0){numEven++;if(numEven == 2){canbe = true; break;}}
                if(it%4 == 0){
                    
                    canbe = true;
                    break;
                }
            }
            (canbe ? cout << 0 << "\n" : cout << min(mini, 2 - numEven) << "\n");

        }
    }
    return 0;
} 
