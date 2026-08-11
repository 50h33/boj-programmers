#include <bits/stdc++.h>
using namespace std;
bool used[10004];
int n; vector<string> answer;
bool dfs(vector<vector<string>>& tickets, vector<string>& path, const string& cur) {
    if (path.size() == n+1) {
        answer = path;
        return true;
    }
    for (int i = 0; i < n; i++) {
        if (used[i] || tickets[i][0] != cur) continue;
        used[i] = 1;
        path.push_back(tickets[i][1]);
        if (dfs(tickets, path, tickets[i][1])) return true;
        path.pop_back();
        used[i] = 0;
    }
    return false;
}

vector<string> solution(vector<vector<string>> tickets) {
    n = tickets.size();
    sort(tickets.begin(), tickets.end());
    vector<string> path = {"ICN"};
    dfs(tickets, path, "ICN");
    return answer;
}