#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int,int>> st;

    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } else {
            if (val < st.top().second) {
                st.push({val, val});
            } else {
                st.push({val, st.top().second});
            }
        }
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};

int main() {
    MinStack st1;
    st1.push(-2);
    st1.push(0);
    st1.push(-3);
    cout << st1.getMin() << endl;
    st1.pop();
    cout << st1.top() << endl;
    cout << st1.getMin() << endl;

    MinStack st2;
    st2.push(5);
    st2.push(3);
    st2.push(7);
    cout << st2.getMin() << endl;
    st2.pop();
    cout << st2.getMin() << endl;

    return 0;
}
