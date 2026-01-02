#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.size();
    unordered_set<char> hashSet;
    int i = 0, j = 0;
    int maxLen = 0;
    while (j < n) {
        if (hashSet.find(s[j]) == hashSet.end()) {
            hashSet.insert(s[j]);
            maxLen = max(maxLen, j - i + 1);
            j++;
        } else {
            hashSet.erase(s[i]);
            i++;
        }
    }
    return maxLen;
}

int main() {
    string s1 = "abcabcbb";
    cout << lengthOfLongestSubstring(s1) << endl;

    string s2 = "bbbbb";
    cout << lengthOfLongestSubstring(s2) << endl;

    return 0;
}
