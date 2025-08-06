#include <bits/stdc++.h>
using namespace std;

#define optimize_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define append push_back
#define complete(x) x.begin(), x.end()
#define length(x) (int)x.size()
#define first_elem first
#define second_elem second

const int MODULO = 1e9 + 7;
const int INFINITY_VAL = 1e18;

void process_test_case() {
    int rows, cols;
    cin >> rows >> cols;
    int matrix[701][701]; 
    unordered_map<int, int> color_status;  
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cin >> matrix[row][col];
            color_status[matrix[row][col]] = 1;
        }
    }

    int horizontal_moves[4] = {0, 0, -1, 1};  
    int vertical_moves[4] = {1, -1, 0, 0};
    set<int> adjacent_count;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int current_color = matrix[row][col];
            for (int direction = 0; direction < 4; direction++) {
                int neighbor_row = row + vertical_moves[direction];  
                int neighbor_col = col + horizontal_moves[direction];
                if (neighbor_row >= 0 && neighbor_row < rows && neighbor_col >= 0 && neighbor_col < cols && current_color == matrix[neighbor_row][neighbor_col]) {
                    color_status[current_color] = 2;
                    adjacent_count.insert(current_color); 
                }
            }
        }
    }

    int total_changes = 0;
    int max_frequency = 0;
    for (auto element : color_status) {
        total_changes += element.second;
        max_frequency = max(max_frequency, element.second);
    }

    cout << total_changes - max_frequency << endl;
}

signed main() {
    optimize_io;
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        process_test_case();
    }
    return 0;
}
