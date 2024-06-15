#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    long res = power(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
}

int main()
{
    cout<<power(4,2)<<" "<<pow(4,2);
}