#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int maximumNetworks(vector<int> speed, int minComps, long speedThreshold) {
    int n = speed.size();
    int maxNetworks = 0;
    
   
    vector<long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + speed[i];
    }
    
  
    vector<int> dp(n + 1, 0);
    
    for (int i = n - 1; i >= 0; i--) {
       
        dp[i] = dp[i + 1];
        
        
        for (int j = i + minComps - 1; j < n; j++) {
            long segmentSum = prefix[j + 1] - prefix[i];
            if (segmentSum >= speedThreshold) {
               
                dp[i] = max(dp[i], 1 + dp[j + 1]);
            }
        }
    }
    
    return dp[0];
}

// Alternative more efficient solution using greedy approach
int maximumNetworksGreedy(vector<int> speed, int minComps, long speedThreshold) {
    int n = speed.size();
    int networks = 0;
    int i = 0;
    
    while (i <= n - minComps) {
        long currentSum = 0;
        int count = 0;
        int j = i;
        
        // Try to form a network starting at position i
        while (j < n) {
            currentSum += speed[j];
            count++;
            j++;
            
            // Check if we have enough computers and meet threshold
            if (count >= minComps && currentSum >= speedThreshold) {
                networks++;
                i = j;  // Move to next position after this network
                break;
            }
        }
        
        // If we couldn't form a network starting at i, move to next position
        if (j == n && (count < minComps || currentSum < speedThreshold)) {
            i++;
        }
    }
    
    return networks;
}

// Most efficient solution using optimized greedy approach
int maximumNetworksOptimized(vector<int> speed, int minComps, long speedThreshold) {
    int n = speed.size();
    int networks = 0;
    int currentStart = 0;
    
    while (currentStart <= n - minComps) {
        long sum = 0;
        bool foundNetwork = false;
        
        
        for (int i = currentStart; i < n; i++) {
            sum += speed[i];
            int length = i - currentStart + 1;
            
            if (length >= minComps && sum >= speedThreshold) {
               
                networks++;
                currentStart = i + 1;  
                foundNetwork = true;
                break;
            }
        }
        
        if (!foundNetwork) {
            
            currentStart++;
        }
    }
    
    return networks;
}

int main() {
    // Test cases
    vector<int> speed1 = {5, 7, 9, 12, 10, 13};
    int minComps1 = 2;
    long threshold1 = 15;
    cout << maximumNetworks(speed1, minComps1, threshold1) << endl;  // Expected: 2
    
    vector<int> speed2 = {3, 3, 2, 5, 3, 2, 4};
    int minComps2 = 2;
    long threshold2 = 7;
    cout << maximumNetworks(speed2, minComps2, threshold2) << endl;  // Expected: 2
    
    vector<int> speed3 = {1, 2, 3, 4, 5};
    int minComps3 = 3;
    long threshold3 = 20;
    cout << maximumNetworks(speed3, minComps3, threshold3) << endl;  // Expected: 0
    
    return 0;
}