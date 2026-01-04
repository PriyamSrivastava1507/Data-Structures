#include <bits/stdc++.h>
using namespace std;

pair<int, int> getDivCountAndSum(int n) {
    int divCount = 1;
    int divSum = 1;
    int temp = n;

    if (temp % 2 == 0) {
        int count = 0;
        while (temp % 2 == 0) {
            temp /= 2;
            count++;
        }
        divCount *= (count + 1);
        divSum *= (pow(2, count + 1) - 1);
    }

    for (int i = 3; i * i <= temp; i += 2) {
        if (temp % i == 0) {
            int count = 0;
            while (temp % i == 0) {
                temp /= i;
                count++;
            }
            divCount *= (count + 1);
            divSum *= (pow(i, count + 1) - 1) / (i - 1);
        }
    }

    if (temp > 2) {
        divCount *= 2;
        divSum *= (temp + 1);
    }

    return {divCount, divSum};
}

int sumFourDivisors(vector<int>& nums) {
    int sum = 0;
    for (int x : nums) {
        auto divInfo = getDivCountAndSum(x);
        if (divInfo.first == 4) {
            sum += divInfo.second;
        }
    }
    return sum;
}

int main() {
    vector<int> nums1 = {21, 4, 7};
    cout << sumFourDivisors(nums1) << endl;

    vector<int>
