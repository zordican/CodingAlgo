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
      long long k;
      cin >> k ;
        long long i = 1;
        long long ans = 0;
      while(k){
        long long currNum = i;
        while(currNum){
            ans+=currNum%10;
            currNum/=10;
            k--;
        }
        i++;
      }
      cout << ans << endl;
    }
    return 0;
}