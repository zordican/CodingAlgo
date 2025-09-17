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
        
        int peak = 0;

        for(int i = 0; i < n; i++){
            if(v[i] > v[peak]){
                peak = i;
            }
        }
        // int left = 0;
        // int right = n - 1;
        // int a = 1;
        // int b = 2;
        bool canBe = true;
        // while(left < right){
        //     if(a + b == v[right] + v[left]){
        //         left++;
        //         right--;
        //         a+=2;
        //         b+=2;
        //     }
        //     else{
        //         canBe = false;
        //         break;
        //     }
        // }

        for(int i = 0; i < peak; i++){
            if(v[i] > v[i + 1]){
                canBe = false;
                break;
            }
        }

        if(canBe){
            for(int i = peak; i < n - 1;  i++){
                if(v[i] < v[i+1]){
                    canBe = false;
                    break;
                }
            }
        }
        (canBe ? cout << "YES" << "\n" : cout << "NO" << "\n");
    }
    return 0;
} 
