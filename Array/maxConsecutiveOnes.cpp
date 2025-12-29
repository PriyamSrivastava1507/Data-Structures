#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int maxSum = 0;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            currentSum++;
        }
        else
        {
            maxSum = max(maxSum, currentSum);
            currentSum = 0;
        }
    }
    maxSum = max(maxSum, currentSum);
    return maxSum;
}

int main()
{
    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums1) << endl;

    vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    cout << findMaxConsecutiveOnes(nums2) << endl;

    return 0;
}
