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
        int n, a ,b ;

        cin >> n >> a >> b;

        if(n&1){
            if(a==n || b==n)cout << "YES" << "\n";
            else if(b >= a && b&1)cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
        else{
            if(a==n || b==n)cout << "YES" << "\n";
             else if(b >= a && !(b&1))cout << "YES" << "\n";
                else cout << "NO" << "\n";
    }
    }
    return 0;
} 
