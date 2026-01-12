#include <bits/stdc++.h>
using namespace std;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int n = startTime.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (startTime[i] <= queryTime && endTime[i] >= queryTime) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> start1 = {1, 2, 3};
    vector<int> end1 = {3, 2, 7};
    cout << busyStudent(start1, end1, 4) << endl;

    vector<int> start2 = {4};
    vector<int> end2 = {4};
    cout << busyStudent(start2, end2, 4) << endl;

    return 0;
}

