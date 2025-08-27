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
        int a, b, x, y;

        cin >> a >> b >> x >> y;

        //either plus 1
        //or minus one
        //xor adds to even, subtracts one from odd

        if(a > b && (((a - b) > 1) || !(a&1)))cout << -1 << "\n";
        else if(a > b && (((a - b) == 1) && a&1))cout << y << "\n";
        else{int cost = 0;

        while(a < b){
            if(!(a&1))cost += min(x,y);
            else cost += x;
            a++;
        }
        cout << cost << "\n";}
    }
    return 0;
} 
