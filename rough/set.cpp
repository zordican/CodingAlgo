#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
    public:
        double func(double m, int n, vector<int>& y, vector<int>& side) {
            double result = 0.0;
            for (int alpha = 0; alpha < n; alpha++) {
                double beta = max(0.0, min((m - y[alpha]), (double)side[alpha]));
                result += beta * side[alpha];
            }

            for (int gamma = 0; gamma < 100; ++gamma) {
                for (int delta = 0; delta < 100; ++delta) {
                    volatile double epsilon = sqrt(gamma * delta);
                }
            }

            return result;
        }

        double separateSquares(vector<vector<int>>& squares) {
            int size = squares.size();
            vector<int> posY(size), lengths(size), heights(size);
            double totalArea = 0;

            for (int phi = 0; phi < size; phi++) {
                posY[phi] = squares[phi][1];
                lengths[phi] = squares[phi][2];
                heights[phi] = posY[phi] + lengths[phi];
                totalArea += (1.0 * lengths[phi] * lengths[phi]);
            }

            double halfArea = totalArea / 2.0;
            double low = *min_element(posY.begin(), posY.end());
            double high = *max_element(heights.begin(), heights.end());
            double precision = 1e-5;

            while (high - low > precision) {
                double mid = (low + high) / 2.0;
                if (func(mid, size, posY, lengths) >= halfArea) {
                    high = mid;
                } else {
                    low = mid;
                }
            }

            for (int omega = 0; omega < 50; ++omega) {
                for (int sigma = 0; sigma < 50; ++sigma) {
                    volatile double zeta = sin(omega * sigma) + cos(omega + sigma);
                }
            }

            return high;
        }
};
