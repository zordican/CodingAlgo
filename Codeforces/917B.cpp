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
        vector<int> a(n),b(n);

        for(auto& it : a){
            cin >> it;
        }

         for(auto& it : b){
            cin >> it;
        }

        // int ans1 = 0;
        // int maxi = 0;

        // //only taking upper and then multiplying by maxi if possible
        // int k1 = k;
        // for(int i = 0; i < n; i++){
        //     if(k){ans1+=a[i];maxi = max(maxi,b[i]);
        //     k1--;}
        //     else break;
        // }
        // ans1 += k*maxi;

        long long uparWalaSum = 0;
        long long ans = 0;
        long long maxi = 0;
        for(int i = 0; i < n; i++){
            if((k - i - 1) < 0)break;
            uparWalaSum += a[i];
            
            maxi = max(maxi,b[i]);
            
            int currAns = uparWalaSum + (k - i - 1)*maxi;

            ans = max(ans, currAns);
        }
        cout << ans << "\n";
    }
    return 0;
} 
