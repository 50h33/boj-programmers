#include <bits/stdc++.h>
using namespace std;
bool visited[104];

int solution(vector<int> priorities, int location) {
    int cnt = 0, idx = 0;
    while (true) {
        int mx = 0;
        for (int i = 0; i < priorities.size(); i++) {
            if (visited[i]) continue;
            mx = max(mx, priorities[i]);
        }
        if (mx == priorities[idx]) {
            cnt++; visited[idx] = 1;
            if (location == idx) return cnt;
        }
        idx++; idx %= (priorities.size());
    }
}