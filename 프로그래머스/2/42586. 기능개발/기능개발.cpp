#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int n = progresses.size(), cur = 0;
    while (true) {
        int cnt = 0;
        while (progresses[cur] >= 100) {
            cur++; cnt++;
            if (cur >= n) break;
        }
        if (cnt != 0) answer.push_back(cnt);
        if (cur >= n) break;
        for (int i = 0; i < n; i++) {
            if (progresses[i] >= 100) continue;
            progresses[i] += speeds[i];
        }
    }
    return answer;
}