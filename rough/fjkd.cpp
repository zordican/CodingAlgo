#include <iostream>
#include <vector>
using namespace std;

bool canTransform(const vector<int>& deck1, const vector<int>& deck2) {
    int n = deck1.size();
    for (int i = 0; i < n; ++i) {
        if (deck1[i] > deck2[i]) {
            return false; // Cannot decrease values
        }
        if (deck1[i] < deck2[i]) {
            int next = (i + 1) % n;
            if (deck1[i] > deck1[next]) {
                return false; // Rule doesn't allow increment here
            }
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> deck1(N), deck2(N);
        for (int i = 0; i < N; ++i) {
            cin >> deck1[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> deck2[i];
        }
        cout << (canTransform(deck1, deck2) ? "YES" : "NO") << endl;
    }
    return 0;
}
