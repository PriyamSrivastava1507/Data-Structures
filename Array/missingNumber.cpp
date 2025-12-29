#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = (n * (n + 1)) / 2;
    for (int x : nums)
    {
        sum -= x;
    }
    return sum;
}

int main()
{
    vector<int> nums1 = {3, 0, 1};
    cout << missingNumber(nums1) << endl;

    vector<int> nums2 = {0, 1};
    cout << missingNumber(nums2) << endl;

    return 0;
}
