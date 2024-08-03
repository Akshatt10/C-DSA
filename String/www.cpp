#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, y, m;
    cin >> x >> y >> m;

    // Create a matrix to represent the society
    vector<vector<bool>> society(x + 1, vector<bool>(y + 1, false));

    // Process each block
    for (int i = 0; i < m; ++i) {
        int r, c1, c2;
        cin >> r >> c1 >> c2;

        // Mark the occupied spaces in the society matrix
        for (int j = c1; j <= c2; ++j) {
            society[r][j] = true;
        }
    }

    // Count the number of empty locations
    int emptyLocations = 0;
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= y; ++j) {
            if (!society[i][j]) {
                emptyLocations++;
            }
        }
    }

    cout << emptyLocations << endl;

    return 0;
}