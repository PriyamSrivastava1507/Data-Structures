#include <bits/stdc++.h>
using namespace std;

void swapVals(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int i = 0, j = 1;
    while (j < n)
    {
        if (nums[i] == 0 && nums[j] != 0)
        {
            swapVals(nums[i], nums[j]);
        }
        if (nums[i] != 0)
        {
            i++;
        }
        j++;
    }
}

int main()
{
    vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);
    for (int x : nums1)
        cout << x << " ";
    cout << endl;

    vector<int> nums2 = {0, 0, 1};
    moveZeroes(nums2);
    for (int x : nums2)
        cout << x << " ";
    cout << endl;

    return 0;
}
