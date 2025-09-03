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
        int n, a , b , c;

        cin >> n >> a >> b >> c;

        int numDays = 0;

        int threeDays = a + b + c;
        int twoDays = a + b;
        int oneDay = a;

            if(n >= threeDays){
                numDays += (n/threeDays)*3;
                n = n%threeDays;
                // cout << n << " ";
            }

            if(n == 0) {
                cout << numDays << "\n";
                continue;
            }

            if(n > twoDays && n < threeDays){
                numDays += 3;
                
                n = 0;
            }

              if(n == twoDays){
                numDays += 2;
                n = 0;
            }

            if(n > oneDay && n < twoDays){
                numDays += 2;
               
                n = 0;
            }
            if(n <= oneDay && n!=0){
                numDays++;
                // cout << n << " ";
            }
        cout << numDays << "\n";
    }
    return 0;
} 
