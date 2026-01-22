#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int totalWater = 0;
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] > leftMax) leftMax = height[left];
            else totalWater += leftMax - height[left];
            left++;
        } else {
            if (height[right] > rightMax) rightMax = height[right];
            else totalWater += rightMax - height[right];
            right--;
        }
    }

    return totalWater;
}

int main() {
    vector<int> h1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(h1) << endl;

    vector<int> h2 = {4,2,0,3,2,5};
    cout << trap(h2) << endl;

    return 0;
}
