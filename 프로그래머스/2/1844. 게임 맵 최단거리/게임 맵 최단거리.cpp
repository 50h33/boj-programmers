#include<bits/stdc++.h>
using namespace std;
const int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
bool visited[104][104];
queue<pair<int, int>> q;
int y, x, n, m, dist[104][104];

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    n = maps.size();
    m = maps[0].size();
    
    visited[0][0] = 1;
    dist[0][0] = 1;
    q.push({0, 0});
    
    while(q.size()) {
        tie(y, x) = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (maps[ny][nx] == 0 || visited[ny][nx]) continue;
            visited[ny][nx] = 1;
            dist[ny][nx] = dist[y][x] + 1;
            q.push({ny, nx});
        }
    }
    
    if (dist[n-1][m-1]) answer = dist[n-1][m-1];
    else answer = -1;
    
    return answer;
}