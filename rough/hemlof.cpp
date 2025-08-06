#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a;
        int b;

        cin >> a >> b;

        if(a > b){
            if((a-b+1)%9 == 0)cout<<'YES'<<endl;
            else cout<<'No'<<endl;
        }
        else{
            if((b - a) == 1)cout<<'yes';
            else cout<<'No'<<endl;
        }
    }
};