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
        int spots, hour;
        cin >> spots >> hour;
        // hour = hour - 1;
        // hour = hour%(2*spots);
        // hour = hour + 1;
        // hour = (hour + 1)%(2*spots);
        int kittySpot = 0;
        int catAspot = spots;
        int ans = 1;
         for(int i = 0; i < hour; i++){
            catAspot = spots - 1 - (i%spots);
            if(kittySpot == catAspot){
                kittySpot = (kittySpot + 1)%spots;
                ans = kittySpot;
            }
            ans = kittySpot;
            kittySpot = (kittySpot + 1)%spots;
         }
         cout << ans + 1 << "\n";
    }
    return 0;
} 
