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

        for(auto& it : v){
            cin >> it;
        }

        int minOpr = 0;
        int neg = 0;
        int sum = 0;
        for(auto it : v){
            if(it == -1){
                neg++;
            }
            sum+=it;
        }

        int pos = n - neg;

        if(sum >= 0){
            (neg%2 ? cout << 1 << "\n" : cout << 0 << "\n");
        }
        else{
            // cout << "iRan" << " ";
            int del = abs(sum)/2 + abs(sum)%2; /*cout << del << " ";*/
            neg -= del; /*cout << neg << " ";*/
            ((neg%2) ? cout << del + 1 << "\n" : cout << del << "\n");
        }
        
    }
    return 0;
} 
