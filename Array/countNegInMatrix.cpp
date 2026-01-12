#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int i = m - 1, j = 0;
    int count = 0;

    while (i >= 0 && j < n) {
        if (grid[i][j] < 0) {
            count += n - j;
            i--;
        } else {
            j++;
        }
    }
    return count;
}

int main() {
    vector<vector<int>> grid1 = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };
    cout << countNegatives(grid1) << endl;

    vector<vector<int>> grid2 = {
        {3, 2},
        {1, 0}
    };
    cout << countNegatives(grid2) << endl;

    return 0;
}
