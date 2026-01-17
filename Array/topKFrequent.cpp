#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int, int> freqMap;
    priority_queue<pair<int, int>> pq;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        freqMap[nums[i]]++;
    }

    for (auto& it : freqMap) {
        pq.push({it.second, it.first});
    }

    for (int i = 0; i < k; i++) {
        auto x = pq.top();
        pq.pop();
        ans.push_back(x.second);
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1,1,1,2,2,3};
    vector<int> res1 = topKFrequent(nums1, 2);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {4,4,4,5,5,6};
    vector<int> res2 = topKFrequent(nums2, 1);
    for (int x : res2) cout << x << " ";
    cout << endl;

    return 0;
}
