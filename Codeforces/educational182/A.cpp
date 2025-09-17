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

        vector<int> prefix(n+1,0);

        for(int i = 0; i < n; i++){
            prefix[i + 1] = prefix[i] + v[i];
        }
        int left = 0;
        int right = 0;
        bool canBe = false;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                int a = (prefix[i + 1] - prefix[0])%3;
                int b = (prefix[j + 1] - prefix[i + 1])%3;
                int c = (prefix[n] - prefix[j + 1])%3;

                if(a == b && b==c){
                    canBe = true;
                    left = i;
                    right = j;
                    break;
                }
                if(a != b && b != c && c != a){
                    canBe = true;
                    left = i;
                    right = j;
                    break;
                }
            }
            if(canBe)break;
        }
        if(!canBe)cout << 0 << " " << 0 << "\n";
        else cout << left + 1 << " " << right + 1<< "\n";
    }
    return 0;
} 
