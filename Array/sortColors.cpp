#include <bits/stdc++.h>
using namespace std;

void swapVals(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int i = 0, j = 0, k = n - 1;
    while (j <= k)
    {
        if (nums[j] == 0)
        {
            swapVals(nums[i], nums[j]);
            i++;
            j++;
        }
        else if (nums[j] == 2)
        {
            swapVals(nums[j], nums[k]);
            k--;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    sortColors(nums1);
    for (int x : nums1)
        cout << x << " ";
    cout << endl;

    vector<int> nums2 = {2, 0, 1};
    sortColors(nums2);
    for (int x : nums2)
        cout << x << " ";
    cout << endl;

    return 0;
}
