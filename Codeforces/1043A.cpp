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
       int n1;
       cin >> n1;
       string a;
       cin >> a;

       int n2;
       cin>>n2;
       string b;
       cin>>b;
       string c;
       cin>>c;

       string front = "";
        string back = "";
       for(int i = n2 - 1; i >= 0; i--){
        if(c[i] == 'V')front+=b[i];
        else back+=b[i];
       }
       reverse(back.begin(),back.end());
       cout<<front + a + back<<endl;
    }
    return 0;
}