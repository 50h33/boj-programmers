#include <string>
#include <vector>
using namespace std;
bool visited[204];

void go(int cur, vector<vector<int>> computers) {
    visited[cur] = true;
    for (int nxt = 0; nxt < computers[cur].size(); nxt++) {
        if (computers[cur][nxt] && !visited[nxt]) {
            go(nxt, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < computers.size(); i++) {
        if (visited[i]) continue;
        go(i, computers);
        answer++;
    }
    return answer;
}