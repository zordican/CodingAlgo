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
      for(auto& it : v)  {
        cin >> it;
      }

      int left = 0;
      int right = n - 1;
      
      int max = n;
      int min = 1;

      bool canDo = true;

      while(left < right){
        if(v[left] == max){
            left++;
            max--;
        }
        else if(v[left] == min){
            left++;
            min++;
        }
        else if(v[right] == max){
            right--;
            max--;
        }
        else if(v[right] == min){
            right--;
            min++;
        }
        else break;
      }

      if(left == right)canDo = false;

      (canDo ? cout << left + 1 << " " << right + 1 << "\n" : cout << -1 << "\n");
    }
    return 0;
} 
