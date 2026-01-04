#include <bits/stdc++.h>
using namespace std;

vector<int> recoverArray(int n, vector<int>& sums) {
    sort(sums.begin(), sums.end());
    vector<int> ans;
    while (sums.size() > 1) {
        int s = sums.size();
        int num = sums[s - 1] - sums[s - 2];
        unordered_map<int, int> freqMap;
        for (int x : sums) freqMap[x]++;
        vector<int> include, exclude;
        for (int x : sums) {
            if (freqMap[x] > 0) {
                include.push_back(x);
                exclude.push_back(x + num);
                freqMap[x]--;
                freqMap[x + num]--;
            }
        }
        if (find(include.begin(), include.end(), 0) != include.end()) {
            sums = include;
            ans.push_back(num);
        } else {
            sums = exclude;
            ans.push_back(-num);
        }
    }
    return ans;
}

int main() {
    vector<int> sums1 = {0, 1, 3, 4};
    vector<int> res1 = recoverArray(2, sums1);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> sums2 = {0, 0, 0, 0};
    vector<int> res2 = recoverArray(2, sums2);
    for (int x : res2) cout << x << " ";
    cout << endl;

    return 0;
}
