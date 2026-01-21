#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int target = -nums[i];
        int j = i + 1, k = n - 1;

        while (j < k) {
            if (nums[j] + nums[k] == target) {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                while (j < k && nums[j] == nums[j - 1]) j++;
            } else if (nums[j] + nums[k] > target) {
                k--;
            } else {
                j++;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    auto res1 = threeSum(nums1);
    for (auto &v : res1) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> nums2 = {0, 0, 0, 0};
    auto res2 = threeSum(nums2);
    for (auto &v : res2) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }

    return 0;
}
