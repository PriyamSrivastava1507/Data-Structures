#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> freqMap;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (freqMap.find(target - nums[i]) != freqMap.end())
        {
            ans.push_back(freqMap[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        freqMap[nums[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> res1 = twoSum(nums1, 9);
    for (int x : res1)
        cout << x << " ";
    cout << endl;

    vector<int> nums2 = {3, 2, 4};
    vector<int> res2 = twoSum(nums2, 6);
    for (int x : res2)
        cout << x << " ";
    cout << endl;

    return 0;
}
