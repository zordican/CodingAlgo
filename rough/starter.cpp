#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;

    while(t--){
        int games;
        cin>>games;

        int alice=0;
        int bob=0;
        int draw=0;

        while(games--){
            long long aliceNum;
            long long bobNum;

            cin>>aliceNum>>bobNum;

            long long aliceSteps = 0;
            long long bobSteps = 0;

            while(aliceNum!=1 && bobNum!=1){
                aliceSteps++;
                bobSteps++;

                if(aliceNum%2==0){
                    aliceNum/=2;
                }
                else{
                    aliceNum=3*aliceNum+1;
                }

                if(bobNum%2==0){
                    bobNum/=2;
                }
                else{
                    bobNum=3*bobNum+1;
                }


            }

            if(aliceNum==1 && bobNum!=1){
                alice++;
            }
            else if(aliceNum!=1 && bobNum==1){
                bob++;
            }
            else draw++;


        }
        cout<<alice<<" "<<bob<<" "<<draw<<endl;

    }
}