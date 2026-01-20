#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 1;

    for (int x : st) {
        if (st.find(x - 1) == st.end()) {
            int curr = x;
            int count = 1;
            while (st.find(curr + 1) != st.end()) {
                curr++;
                count++;
            }
            longest = max(longest, count);
        }
    }

    return longest;
}

int main() {
    vector<int> nums1 = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums1) << endl;

    vector<int> nums2 = {0, 3, 7, 2, 5, 8, 4, 6, 1};
    cout << longestConsecutive(nums2) << endl;

    return 0;
}
