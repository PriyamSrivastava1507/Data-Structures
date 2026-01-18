#include <bits/stdc++.h>
using namespace std;

string encode(vector<string>& strs) {
    int n = strs.size();
    string code = "";
    for (int i = 0; i < n; i++) {
        code += to_string(strs[i].size()) + '#' + strs[i];
    }
    return code;
}

vector<string> decode(string s) {
    int n = s.size();
    vector<string> ans;
    int i = 0;
    while (i < n) {
        int j = i;
        while (s[j] != '#') j++;
        int len = stoi(s.substr(i, j - i));
        j++;
        ans.push_back(s.substr(j, len));
        i = j + len;
    }
    return ans;
}

int main() {
    vector<string> strs1 = {"lint", "code", "love", "you"};
    string enc1 = encode(strs1);
    vector<string> dec1 = decode(enc1);
    for (auto& s : dec1) cout << s << " ";
    cout << endl;

    vector<string> strs2 = {"hello", "world"};
    string enc2 = encode(strs2);
    vector<string> dec2 = decode(enc2);
    for (auto& s : dec2) cout << s << " ";
    cout << endl;

    return 0;
}
