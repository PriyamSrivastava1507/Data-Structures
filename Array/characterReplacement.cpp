#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    int n = s.size();
    int freqMap[26] = {0};
    int i = 0, j = 0;
    int maxFreq = 0;
    int maxLen = 0;

    while (j < n) {
        freqMap[s[j] - 'A']++;
        maxFreq = max(maxFreq, freqMap[s[j] - 'A']);

        int windowSize = j - i + 1;
        if (windowSize - maxFreq > k) {
            freqMap[s[i] - 'A']--;
            i++;
        }

        maxLen = max(maxLen, j - i + 1);
        j++;
    }

    return maxLen;
}

int main() {
    cout << characterReplacement("ABAB", 2) << endl;
    cout << characterReplacement("AABABBA", 1) << endl;
    return 0;
}
