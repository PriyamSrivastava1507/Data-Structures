#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        while (i < j && !isalnum(s[i])) i++;
        while (i < j && !isalnum(s[j])) j--;
        if (toupper(s[i]) != toupper(s[j])) return false;
    }
    return true;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s1) << endl;

    string s2 = "race a car";
    cout << isPalindrome(s2) << endl;

    return 0;
}
