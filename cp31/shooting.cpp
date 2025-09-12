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
    vector<vector<int> > score = { {1,1,1,1,1,1,1,1,1,1},
                                  {1,2,2,2,2,2,2,2,2,1},
                                  {1,2,3,3,3,3,3,3,2,1},
                                  {1,2,3,4,4,4,4,3,2,1},
                                  {1,2,3,4,5,5,4,3,2,1},
                                  {1,2,3,4,5,5,4,3,2,1},
                                  {1,2,3,4,4,4,4,3,2,1},
                                  {1,2,3,3,3,3,3,3,2,1},
                                  {1,2,2,2,2,2,2,2,2,1},
                                  {1,1,1,1,1,1,1,1,1,1}};
                                  
    while (t--)
    {
        // vector<vector<char>> v(10, vector<char>(10, '.'));
        int points = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                char a;
                cin >> a;
                if(a == 'X')points+=score[i][j];
            }
        }
        cout << points << "\n";
    }
    return 0;
}
 