#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> sumMap;
    int seqCount = 0;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += nums[i];
        int remSum = currSum - k;
        if (currSum == k)
        {
            seqCount++;
        }
        auto it = sumMap.find(remSum);
        if (it != sumMap.end())
        {
            seqCount += it->second;
        }
        sumMap[currSum]++;
    }
    return seqCount;
}

int main()
{
    vector<int> nums1 = {1, 1, 1};
    cout << subarraySum(nums1, 2) << endl;

    vector<int> nums2 = {1, 2, 3};
    cout << subarraySum(nums2, 3) << endl;

    return 0;
}
