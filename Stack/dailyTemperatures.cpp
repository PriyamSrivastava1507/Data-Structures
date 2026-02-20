#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int idx = st.top();
            st.pop();
            ans[idx] = i - idx;
        }
        st.push(i);
    }

    return ans;
}

int main() {
    vector<int> t1 = {73,74,75,71,69,72,76,73};
    vector<int> res1 = dailyTemperatures(t1);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> t2 = {30,40,50,60};
    vector<int> res2 = dailyTemperatures(t2);
    for (int x : res2) cout << x << " ";
    cout << endl;

    return 0;
}
