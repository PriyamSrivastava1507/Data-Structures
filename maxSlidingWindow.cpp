#include <bits/stdc++.h>
using namespace std;

void modifiedInsert(deque<int>& dq, vector<int>& nums, int index) {
    while (!dq.empty() && nums[dq.back()] < nums[index]) {
        dq.pop_back();
    }
    dq.push_back(index);
}

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    deque<int> dq;
    vector<int> ans;

    int i = 0, j = k - 1;

    for (int l = i; l <= j; l++) {
        modifiedInsert(dq, nums, l);
    }

    ans.push_back(nums[dq.front()]);
    i++;
    j++;

    while (j < n) {
        if (!dq.empty() && dq.front() < i) {
            dq.pop_front();
        }

        modifiedInsert(dq, nums, j);
        ans.push_back(nums[dq.front()]);
        i++;
        j++;
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1,3,-1,-3,5,3,6,7};
    vector<int> res1 = maxSlidingWindow(nums1, 3);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {9, 11};
    vector<int> res2 = maxSlidingWindow(nums2, 2);
    for (int x : res2) cout << x << " ";
    cout << endl;

    return 0;
}
