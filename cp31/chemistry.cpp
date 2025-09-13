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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int numOdd = 0;
        int numEven = 0;

        unordered_map<char,int> mpp;
        for(auto it : s){
            mpp[it]++;
        }

        for(auto it : mpp){
            // cout << it.second << endl;
            numOdd += it.second%2;
            numEven += it.second/2;
        }
        if((n - k)&1)numOdd -= 1; // agar finally odd string hai to ek odd rakhna padega
        // cout << numOdd << " " << numEven << "\n";

        k-=numOdd;
        if(k < 0)cout << "NO" << "\n";
        else if(k == 0)cout << "YES" << "\n";
        else{
            if(k&1){cout << "NO" << "\n";return 0;}

            if(k <= numEven*2)cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
    return 0;
} 
