#include <bits/stdc++.h>
using namespace std;
bool visited[54];
queue<pair<string, int>> q;

int solution(string begin, string target, vector<string> words) {
    q.push({begin, 0});
    while(q.size()) {
        auto [cur, num] = q.front(); q.pop();
        if (cur == target) return num;
        for (int idx = 0; idx < words.size(); idx++) {
            int diff = 0;
            for (int i = 0; i < words[idx].size(); i++) {
                if (words[idx][i] != cur[i]) diff++;
            }
            if (diff == 1 && !visited[idx]) {
                visited[idx] = 1;
                q.push({words[idx], num + 1});
            }
        }
    }
    return 0;
}