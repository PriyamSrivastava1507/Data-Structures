#include <bits/stdc++.h>
using namespace std;

void getAllPermute(vector<int>& nums, vector<int>& sol, vector<bool>& used, vector<vector<int>>& ans) {
    int n = nums.size();
    if (sol.size() == n) {
        ans.push_back(sol);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        used[i] = true;
        sol.push_back(nums[i]);
        getAllPermute(nums, sol, used, ans);
        used[i] = false;
        sol.pop_back();
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> sol;
    vector<bool> used(nums.size(), false);
    getAllPermute(nums, sol, used, ans);
    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<vector<int>> res1 = permute(nums1);
    for (auto& v : res1) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> nums2 = {0, 1};
    vector<vector<int>> res2 = permute(nums2);
    for (auto& v : res2) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }

    return 0;
}
