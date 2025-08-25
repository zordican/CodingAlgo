#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int recurse(vector<int>& v, int left, int right, int operation){
    if(left == right){
        if(v[left]%2 == 0)return operation;
        else return INT_MAX;
    }
    if((v[left]+v[right])%2 == 0)return operation;

    //left++;
    int l = recurse(v, left + 1, right, operation + 1);
    //right--
    int r = recurse(v, left, right - 1, operation + 1);

    return min(l,r);
}

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

        sort(v.begin(),v.end());
        
        
        if(n == 1)cout << 0 << "\n";
        else cout << recurse(v, 0, n - 1, 0) << "\n";
    }
    return 0;
} 
