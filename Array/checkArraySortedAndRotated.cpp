#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int rotate = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            rotate++;
            if (rotate > 1)
                return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << check(nums1) << endl;

    vector<int> nums2 = {2, 1, 3, 4};
    cout << check(nums2) << endl;

    return 0;
}
