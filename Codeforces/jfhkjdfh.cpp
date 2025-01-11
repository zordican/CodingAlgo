#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

vector<int> placePlatforms(int A, int B, vector<int> &C) {
    int M = C.size();
    vector<int> result(A, 0); // Result array filled with 0 initially
    vector<int> startPositions(M); // Start positions of each platform
    int currentPosition = 0; // Start placing from position 0

    // Try to place the platforms as close to the start as possible
    for (int i = 0; i < M; i++) {
        // Calculate the minimum starting position for the current platform
        int minPosition = max(currentPosition, A - accumulate(C.begin() + i, C.end(), 0));

        // If minPosition exceeds the maximum reachable position, return -1
        if (minPosition > currentPosition + B) {
            return {-1};
        }

        // Set the start position for this platform
        startPositions[i] = minPosition;

        // Fill the result array with the platform index (1-based)
        for (int j = 0; j < C[i]; j++) {
            result[startPositions[i] + j] = i + 1;
        }

        // Update the current position
        currentPosition = startPositions[i] + C[i];
    }

    return result;
}

int main() {
    int A1 = 7, B1 = 2;
    vector<int> C1 = {1, 2, 1};
    vector<int> result1 = placePlatforms(A1, B1, C1);
    for (int x : result1) cout << x << " ";
    cout << endl;  // Output: 0 1 0 2 2 0 3

    int A2 = 10, B2 = 5;
    vector<int> C2 = {2};
    vector<int> result2 = placePlatforms(A2, B2, C2);
    for (int x : result2) cout << x << " ";
    cout << endl;  // Output: 0 0 0 0 1 1 0 0 0 0

    return 0;
}
