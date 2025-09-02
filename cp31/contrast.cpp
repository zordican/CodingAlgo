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
        
        if(n < 3)cout << n << "\n";
        else{
            int contrastValue = 0;
            for(int i = 0; i < n - 1; i++){
                contrastValue+=abs(v[i] - v[i + 1]);
            }
            // if(contrastValue == 0){
            //     cout << 1 << "\n";
            //     break;
            // }

            int neg = 0;
            for(int i = 1; i < n - 1; i++){
                if(v[i] >= v[i+1] && v[i] <= v[i-1])neg++;
                else if(v[i] <= v[i+1] && v[i] >= v[i-1])neg++;
                else continue;
            }

            if(contrastValue == abs(v[0] - v[n - 1])){
                neg = neg;
            }
            else neg--;

            if(contrastValue == 0)cout << 1 << "\n";
            else cout << n - neg << "\n";
        }
        
    }
    return 0;
} 
