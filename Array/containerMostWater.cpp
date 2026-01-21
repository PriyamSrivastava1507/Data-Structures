#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int maxArea = 0;
    int i = 0, j = n - 1;

    while (i < j) {
        int h = min(height[i], height[j]);
        int w = j - i;
        int area = h * w;
        maxArea = max(maxArea, area);

        if (height[i] < height[j]) i++;
        else j--;
    }

    return maxArea;
}

int main() {
    vector<int> h1 = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(h1) << endl;

    vector<int> h2 = {1,1};
    cout << maxArea(h2) << endl;

    return 0;
}
