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
        vector<int> a(n), b(n), c(n);

        for(auto& it : a){
            cin >> it;
        }

         for(auto& it : b){
            cin >> it;
        }

         for(auto& it : c){
            cin >> it;
        }

        vector<pair<int, int>> A, B, C;

        for(int i = 0; i < n; i++){
            A.push_back({a[i],i});
            B.push_back({b[i],i});
            C.push_back({c[i],i});
        }

        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        sort(C.begin(),C.end());

        if(A[n-1].second != B[n-1].second && B[n-1].second != C[n-1].second){
            cout << A[n-1].first + B[n-1].first + C[n-1].first << "\n";
        }
        else if(A[n-1].second == B[n-1].second || B[n-1].second == C[n-1].second || C[n-1].second == A[n-1].second){
            if(A[n-1].second == B[n-1].second)cout << C[n-1].first + max(A[n-1].first+B[n-2].first,B[n-1].first+A[n-2].first) << "\n";
            if(B[n-1].second == C[n-1].second)cout << A[n-1].first + max(B[n-1].first+C[n-2].first,C[n-1].first+B[n-2].first) << "\n";
            if(A[n-1].second == C[n-1].second)cout << B[n-1].first + max(A[n-1].first+C[n-2].first,C[n-1].first+A[n-2].first) << "\n";
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
} 
