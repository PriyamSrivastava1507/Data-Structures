#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int set = 1;
    for (int i = 0, j = 1; j < n; j++)
    {
        if (nums[i] != nums[j])
        {
            nums[set++] = nums[j];
            i = j;
        }
    }
    return set;
}

int main()
{
    vector<int> nums1 = {1, 1, 2};
    int k1 = removeDuplicates(nums1);
    cout << k1 << endl;
    for (int i = 0; i < k1; i++)
        cout << nums1[i] << " ";
    cout << endl;

    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = removeDuplicates(nums2);
    cout << k2 << endl;
    for (int i = 0; i < k2; i++)
        cout << nums2[i] << " ";
    cout << endl;

    return 0;
}
