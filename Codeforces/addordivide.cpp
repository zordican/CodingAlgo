#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int minOpr(int a, int b){
    if(a < b)return 1;

    //add
    int add = minOpr(a,b+1) + 1;
    //divide
    int divide = INT_MAX;
    if(b != 1){
       divide = minOpr(a/b, b) + 1;
    }

    return min(add,divide);
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
   
    while (t--) {
        int a, b;
        cin >> a >> b;
        int currOpr = 0;
        
        if(b == 1)currOpr = 1;
        b++;

        int mini = INT_MAX;

        cout << minOpr(a,b) + currOpr << "\n";
    }
    return 0;
} 
