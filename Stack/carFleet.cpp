#include <bits/stdc++.h>
using namespace std;

int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int n = position.size();
    vector<pair<int,int>> ps;
    stack<float> st;

    for (int i = 0; i < n; i++) {
        ps.push_back({position[i], speed[i]});
    }

    sort(ps.begin(), ps.end(), greater<pair<int,int>>());

    int fleet = 0;

    for (int i = 0; i < n; i++) {
        float time = (target - ps[i].first) / (float)ps[i].second;
        if (st.empty() || st.top() < time) {
            fleet++;
            st.push(time);
        }
    }

    return fleet;
}

int main() {
    int target1 = 12;
    vector<int> pos1 = {10, 8, 0, 5, 3};
    vector<int> speed1 = {2, 4, 1, 1, 3};
    cout << carFleet(target1, pos1, speed1) << endl;

    int target2 = 10;
    vector<int> pos2 = {3};
    vector<int> speed2 = {3};
    cout << carFleet(target2, pos2, speed2) << endl;

    return 0;
}
