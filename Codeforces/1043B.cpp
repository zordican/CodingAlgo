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
      //1 + pow(10,k)
      long long n;
      cin >> n;
      long long currNum;
      long long i = 1;
      vector<long long> ans;
      currNum = 1 + pow(10,i);
      while(currNum <= n){
        if(n%currNum == 0){
            ans.push_back(n/currNum);
        }
        i++;
        currNum = 1 + (long long)pow(10LL, i);
      }
      reverse(ans.begin(),ans.end());
      if(ans.empty())cout << 0 << "\n";
      else{
        cout<<ans.size()<<"\n";
        for(auto it : ans){
            cout << it << " ";
        }
        cout<<"\n";
      }
    }
    return 0;
}