#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    unordered_map<char, int> counter;
    for (char ch : s) {
        counter[ch]++;
    }
    for (char ch : t) {
        if (counter.find(ch) == counter.end() || counter[ch] == 0) {
            return false;
        }
        counter[ch]--;
    }
    return true;
}

int main() {
    string s1 = "anagram";
    string t1 = "nagaram";
    cout << isAnagram(s1, t1) << endl;

    string s2 = "rat";
    string t2 = "car";
    cout << isAnagram(s2, t2) << endl;

    return 0;
}
