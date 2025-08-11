#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v1(n);
        for (int &x : v1) cin >> x; //nice

        vector<int> v2(n);
        vector<int> visited(n,-1);
        for (int &x : v2) cin >> x;
        bool canChange = false;
        bool allPassed = true;
       for(int i = 0; i < n; i++){
        canChange = false;
        
        for(int j = 0; j < n; j++){
            if(visited[j] == -1){
            if(abs(v1[i] - v2[j])%k == 0 || abs(abs((v1[i] % k) - k) - v2[j])%k == 0){canChange = true;visited[j] = 1;break;}}
            else continue;
        }
        if (!canChange) {
        allPassed = false;
        break;
    }
       }
       cout<<(allPassed? "YES":"NO")<<endl;
    }
}
//cout<<v1[i]<<" "<<v2[j]<<"\n";
//abs(v1[i] - v2[j])%k == 0 || abs(abs((v1[i] % k) - k) - v2[j])%k == 0