#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<pair<int,int>> st;
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        int start = i;
        while (!st.empty() && st.top().first > heights[i]) {
            int h = st.top().first;
            int idx = st.top().second;
            st.pop();
            maxArea = max(maxArea, h * (i - idx));
            start = idx;
        }
        st.push({heights[i], start});
    }

    while (!st.empty()) {
        int h = st.top().first;
        int idx = st.top().second;
        st.pop();
        maxArea = max(maxArea, h * (n - idx));
    }

    return maxArea;
}

int main() {
    vector<int> h1 = {2,1,5,6,2,3};
    cout << largestRectangleArea(h1) << endl;

    vector<int> h2 = {2,4};
    cout << largestRectangleArea(h2) << endl;

    return 0;
}
