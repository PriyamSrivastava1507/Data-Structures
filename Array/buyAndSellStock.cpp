#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxProfit = 0;
    int i = 0, j = i + 1;

    while (j < n) {
        int profit = prices[j] - prices[i];
        if (profit < 0) {
            i = j;
        } else {
            maxProfit = max(profit, maxProfit);
        }
        j++;
    }

    return maxProfit;
}

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices1) << endl;

    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << maxProfit(prices2) << endl;

    return 0;
}
