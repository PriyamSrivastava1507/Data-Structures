#include <bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        sum += min(nums[i], nums[i + 1]);
    }
    return sum;
}

int main()
{
    vector<int> nums1 = {1, 4, 3, 2};
    cout << arrayPairSum(nums1) << endl;

    vector<int> nums2 = {6, 2, 6, 5, 1, 2};
    cout << arrayPairSum(nums2) << endl;

    return 0;
}
