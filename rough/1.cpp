#include <bits/stdc++.h>

using namespace std;

// Function to calculate Fibonacci number using memoization
int f(int n, vector<int>& dp) {
    // Base case: return n if n is 0 or 1
    if (n <= 1) return n;
    
    // If the value is already calculated, return it
    if (dp[n] != -1) return dp[n];
    
    // Calculate the value and store it in dp array
    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main() {
    int n = 5; // Fibonacci number to find
    vector<int> dp(n + 1, -1); // Initialize dp array with -1
    
    // Output the nth Fibonacci number
    cout << f(n, dp) << endl;
    
    return 0;
}
