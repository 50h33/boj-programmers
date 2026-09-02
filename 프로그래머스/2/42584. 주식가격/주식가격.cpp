#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int idx = 0;
    while (idx < prices.size()) {
        int cur = prices[idx], cnt = 0; idx++;
        for (int i = idx; i < prices.size(); i++) {
            cnt++;
            if (cur > prices[i]) break;
        }
        answer.push_back(cnt);
    }
    return answer;
}