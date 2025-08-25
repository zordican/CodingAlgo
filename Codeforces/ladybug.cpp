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
        string a, b;

        // for(auto& it : a){
        //     cin >> it;
        // }

        // for(auto& it : b){
        //     cin >> it;
        // }

        cin >> a >> b;

        map<char,int> a_odd, a_even, b_odd, b_even;
        int numOdd = n/2;
        int numEven = n - numOdd;

        for(int i = 0; i < n; i+=2){
            a_even[a[i]]++;
            b_even[b[i]]++;
        }

        for(int i = 1; i < n; i+=2){
            a_odd[a[i]]++;
            b_odd[b[i]]++;
        }
        // cout << a_even['0'] << " " << a_odd['0'] << " " << b_even['0'] << " " << b_odd['0'] << "\n";

        if(a_odd['0'] + b_even['0'] >= numOdd && a_even['0'] + b_odd['0'] >= numEven)cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
} 
