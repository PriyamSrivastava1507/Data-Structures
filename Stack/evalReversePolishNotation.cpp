#include <bits/stdc++.h>
using namespace std;

int calculate(int first, int second, string op) {
    if (op == "+") return first + second;
    else if (op == "-") return first - second;
    else if (op == "*") return first * second;
    else return first / second;
}

bool isOperator(string op) {
    return op == "+" || op == "-" || op == "*" || op == "/";
}

int evalRPN(vector<string>& tokens) {
    stack<int> st;

    for (int i = 0; i < tokens.size(); i++) {
        if (!st.empty() && isOperator(tokens[i])) {
            int second = st.top(); st.pop();
            int first = st.top(); st.pop();
            int res = calculate(first, second, tokens[i]);
            st.push(res);
        } else {
            st.push(stoi(tokens[i]));
        }
    }

    return st.top();
}

int main() {
    vector<string> tokens1 = {"2","1","+","3","*"};
    cout << evalRPN(tokens1) << endl;

    vector<string> tokens2 = {"4","13","5","/","+"};
    cout << evalRPN(tokens2) << endl;

    return 0;
}
