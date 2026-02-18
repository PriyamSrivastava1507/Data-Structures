#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {
    int n = s.size();
    int m = t.size();

    vector<int> windowFreq(128, 0), needFreq(128, 0);

    for (char c : t) {
        needFreq[c]++;
    }

    int have = 0, need = 0;

    for (int i = 0; i < 128; i++) {
        if (needFreq[i] > 0) need++;
    }

    int start = 0;
    int minSize = INT_MAX;

    int i = 0, j = 0;

    while (j < n) {
        windowFreq[s[j]]++;

        if (needFreq[s[j]] != 0 && windowFreq[s[j]] == needFreq[s[j]]) {
            have++;
        }

        while (have == need) {
            int windowSize = j - i + 1;

            if (windowSize < minSize) {
                minSize = windowSize;
                start = i;
            }

            windowFreq[s[i]]--;

            if (needFreq[s[i]] != 0 && windowFreq[s[i]] < needFreq[s[i]]) {
                have--;
            }

            i++;
        }

        j++;
    }

    return minSize == INT_MAX ? "" : s.substr(start, minSize);
}

int main() {
    string s1 = "ADOBECODEBANC";
    string t1 = "ABC";
    cout << minWindow(s1, t1) << endl;

    string s2 = "a";
    string t2 = "a";
    cout << minWindow(s2, t2) << endl;

    return 0;
}
