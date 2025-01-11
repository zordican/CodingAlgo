#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int s[2];
        int x[2];

        cin>>s[0]>>s[1]>>x[0]>>x[1];

        int ways = 0;
        int s_score = 0;
        int x_score = 0;

        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
              s_score = 0;
              x_score = 0;

              if(s[1 - i] > x[1 - j])s_score++;
              else if(s[1 - i] < x[1 - j])x_score++;

              if(s[i] > x[j])s_score++;
              else if(s[i] < x[j])x_score++;

              if(s_score > x_score)ways++;
        }
        }

        cout<<ways<<endl;
    }
}