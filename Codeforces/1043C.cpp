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
      long long n;
      cin >> n;
        long long cost = 0;


        double num = (double)n;
        while(n >= 3){
        
        double num = (double)n;
        double exp = log(num)/log(3);
        long long nearestExp = llround(exp);
        
        long long currFruits = pow(3,nearestExp);

        if(currFruits > n) {
                nearestExp--;
                currFruits = (long long)pow(3, nearestExp);
            }

            cost += (long long)pow(3, nearestExp + 1) + nearestExp * (long long)pow(3, nearestExp - 1);
        n = n - currFruits;

        }
        cout<<cost + 3*n << "\n";
        
    }
    return 0;
}