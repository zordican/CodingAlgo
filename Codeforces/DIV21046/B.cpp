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
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        //let's check groups

        int currGrp = 0;
        bool canDo = true;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')currGrp++;
            else currGrp = 0;

            if(currGrp == k){
                canDo = false;
                break;
            }
        }

        if(canDo){
            cout << "YES" << "\n";
            vector<int> ans(n,0);
            int cnt = 1;

            for(int i = 0; i < n; i++){
                if(s[i] == '1'){
                    ans[i] = cnt;
                    cnt++;
                }
            }
            for(int i = 0; i < n; i++){
                if(s[i] == '0'){
                    ans[i] = cnt;
                    cnt++;
                }
            }
            for(auto it : ans){
                cout << it << " ";
            }
            cout << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
} 
