#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size();
    int uniqueNumber = nums[0];
    for (int i = 1; i < n; i++)
    {
        uniqueNumber ^= nums[i];
    }
    return uniqueNumber;
}

int main()
{
    vector<int> nums1 = {2, 2, 1};
    cout << singleNumber(nums1) << endl;

    vector<int> nums2 = {4, 1, 2, 1, 2};
    cout << singleNumber(nums2) << endl;

    return 0;
}
