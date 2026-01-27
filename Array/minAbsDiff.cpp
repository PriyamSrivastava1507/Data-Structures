#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int minDiff = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff == minDiff) {
            ans.push_back({arr[i], arr[i + 1]});
        } else if (diff < minDiff) {
            minDiff = diff;
            ans.clear();
            ans.push_back({arr[i], arr[i + 1]});
        }
    }

    return ans;
}

int main() {
    vector<int> arr1 = {4, 2, 1, 3};
    auto res1 = minimumAbsDifference(arr1);
    for (auto &v : res1) {
        cout << v[0] << " " << v[1] << endl;
    }
    cout << endl;

    vector<int> arr2 = {1, 3, 6, 10, 15};
    auto res2 = minimumAbsDifference(arr2);
    for (auto &v : res2) {
        cout << v[0] << " " << v[1] << endl;
    }

    return 0;
}
