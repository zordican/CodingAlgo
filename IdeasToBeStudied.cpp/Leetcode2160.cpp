#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num); //num ko string mein convert kiya
        sort(s.begin(), s.end());
        int res = (s[0]-'0'+s[1]-'0')*10 + s[2]-'0'+s[3]-'0'; //ascii value se khela
        return res;
    }
};

int main(){
}
