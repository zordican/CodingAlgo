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
        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        bool canBe = true;
        canBe = (a[n-1] == b[n-1]);
        for(int i = 0; i < n - 1; i++){
            if(a[i] == b[i])continue;
            else{
                if((a[i]^a[i+1]) == b[i] || (a[i]^b[i + 1]) == b[i])continue;
                else{ canBe = false;break;}
            }
        }
        cout<<(canBe ? "YES":"NO")<<"\n";

    }
    return 0;
}
//paranthesis predesence
