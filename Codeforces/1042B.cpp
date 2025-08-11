#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                ans.push_back(3);
            else
                ans.push_back(-1);
        }
        if (!(n & 1))
            ans[n - 1]--;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
