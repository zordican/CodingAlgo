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

        string cell;
        cin>>cell;

        vector<int> grps;

        int currGrp = 0;

        for(auto it : cell){
            if(it == '.'){
                currGrp++;
            }
            else{
                grps.push_back(currGrp);
                currGrp = 0;
            }
        }
        if(currGrp){
            grps.push_back(currGrp);
        }
        int ans = 0;
        for(auto it : grps){
            if(it < 3)ans+=it;
            else{
                ans = 2;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
} 
