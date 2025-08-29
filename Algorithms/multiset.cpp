#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    fastio;

    multiset<string> s;
    s.insert("abs"); //o(log(n))
     s.insert("absdf");
      s.insert("skaf");
      s.insert("abs");

      //allows multiple values is a set
      auto it = s.find("abs");
      if(it != s.end()){
        s.erase(it);
      } //only one abs is deleted

      s.erase("abs"); //all abs is deleted
} 
