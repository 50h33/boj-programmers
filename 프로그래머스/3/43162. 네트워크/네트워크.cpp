#include <bits/stdc++.h>
using namespace std;
bool visited[204];

void go(int idx, int n, vector<vector<int>> computers) {
    visited[idx] = 1;
    for (int i = 0; i < computers[idx].size(); i++) {
        if (idx == i) continue;
        if (!visited[i] && computers[idx][i]) {
            go(i, n, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if(!visited[i]) {
            go(i, n, computers); answer++;
        }
    }
    return answer;
}