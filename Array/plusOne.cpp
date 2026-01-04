#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits1 = {1, 2, 3};
    vector<int> res1 = plusOne(digits1);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> digits2 = {9, 9, 9};
    vector<int> res2 = plusOne(digits2);
    for (int x : res2) cout << x << " ";
    cout << endl;

    return 0;
}
