#include <bits/stdc++.h>
using namespace std;

bool isMatch(char bracket1, char bracket2)
{
    if ((bracket1 == '(' && bracket2 == ')') ||
        (bracket1 == '{' && bracket2 == '}') ||
        (bracket1 == '[' && bracket2 == ']'))
        return true;
    return false;
}

bool isValid(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return false;
            if (isMatch(st.top(), c))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string s1 = "()[]{}";
    cout << isValid(s1) << endl;

    string s2 = "(]";
    cout << isValid(s2) << endl;

    return 0;
}
