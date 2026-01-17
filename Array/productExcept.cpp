#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    int product = 1;
    int productIfZero = 1;
    int cntZero = 0;

    for (int i = 0; i < n; i++) {
        product *= nums[i];
        if (nums[i] != 0) {
            productIfZero *= nums[i];
        } else {
            cntZero++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            if (cntZero > 1) ans.push_back(0);
            else ans.push_back(productIfZero);
        } else {
            ans.push_back(product / nums[i]);
        }
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> res1 = productExceptSelf(nums1);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {0, 1, 2, 3};
    vector<int> res2 = productExceptSelf(nums2);
    for (int x : res2) cout << x << " ";
    cout << endl;

    return 0;
}
