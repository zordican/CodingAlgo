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
        int l1, b1, l2, b2, l3, b3;

        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        vector<int> l;
        l.push_back(l1);
        l.push_back(l2);
        l.push_back(l3);

        vector<int> b;
        b.push_back(b1);
        b.push_back(b2);
        b.push_back(b3);
        
        sort(l.begin(),l.end());
        sort(b.begin(),b.end());

        bool canDo = false;

        if(l[2] == l[1] && l[1] == l[0] && b1+b2+b3 == l[0])canDo = true;
        if(b[2] == b[1] && b[1] == b[0] && l1+l2+l3 == b[0])canDo = true;

        if(l[0] + l[1] == l[2] && b[0] == b[1] && b[2] + b[0] == l[2])canDo = true;
        if(b[0] + b[1] == b[2] && l[0] == l[1] && l[2] + l[0] == b[2])canDo = true;

        (canDo ? cout << "YES" << "\n" : cout << "NO" << "\n");
    }
    return 0;
} 
