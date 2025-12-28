#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &nums, int start, int end)
{
    for (int i = start, j = end; i <= j; i++, j--)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    int rotateBy = k % n;
    reverseArray(nums, 0, n - 1);
    reverseArray(nums, 0, rotateBy - 1);
    reverseArray(nums, rotateBy, n - 1);
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums1, 3);
    for (int x : nums1)
        cout << x << " ";
    cout << endl;

    vector<int> nums2 = {-1, -100, 3, 99};
    rotate(nums2, 2);
    for (int x : nums2)
        cout << x << " ";
    cout << endl;

    return 0;
}
