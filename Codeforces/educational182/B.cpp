#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main()
{
    fastio;

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &it : v)
        {
            cin >> it;
        }

        bool isFirst = false;

        int l = 0;
        int r = 0;

        int numZero = 0;
        int pos = 0;
        int k = 1;
        map<int,int> mpp;  
        for (auto it : v)
        {
            mpp[it]++;
            if (it == 0)
            {
                numZero++;
                pos = k;
            }
            k++;
        }

        if (numZero == 1)
        {
            bool skipZero;
            if(mpp.find(pos) == mpp.end()){
                skipZero = true;
            }
            else skipZero = false;

            for (int i = 0; i < n; i++)
            {
                if(v[i] == 0){
                    if(skipZero)continue;
                }
                if (i + 1 == v[i])
                    continue;
                else
                {
                    if (!isFirst)
                    {
                        l = i;
                        isFirst = true;
                    }
                    else
                        r = i;
                }
            }
            if(r == 0 && l == 0)cout << 0 << "\n";
            else cout << r - l + 1 << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i + 1 == v[i])
                    continue;
                else
                {
                    if (!isFirst)
                    {
                        l = i;
                        isFirst = true;
                    }
                    else
                        r = i;
                }
            }

            if(r == 0 && l == 0)cout << 0 << "\n";
            else cout << r - l + 1 << "\n";
        }
    }
    return 0;
}
