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

        string s;

        cin >> s;

        int numZero = 0;

        for(auto it : s){
            if(it == '0')numZero++;
        }
        int diff = 0;
        for(int i = 0; i < numZero; i++){
            if(s[i] == '0')diff++;
        }

        cout << numZero - diff << "\n";
    }
    return 0;
} 
