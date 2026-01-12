#include <bits/stdc++.h>
using namespace std;

int numTilings(int n) {
    long long modulo = 1e9 + 7;
    vector<long long> solution;
    solution.push_back(0);
    solution.push_back(1);
    solution.push_back(2);
    solution.push_back(5);

    if (n <= 3) {
        return solution[n];
    }

    for (int i = 4; i <= n; i++) {
        long long tileCount = 2 * solution[i - 1] + solution[i - 3];
        tileCount %= modulo;
        solution.push_back(tileCount);
    }

    return solution[n];
}

int main() {
    cout << numTilings(3) << endl;
    cout << numTilings(5) << endl;
    return 0;
}
