#include <bits/stdc++.h>
using namespace std;
int a[104][104], visited[104][104], y, x;
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int answer = 0;
    
    characterX *= 2; characterY *= 2; itemX *= 2; itemY *= 2;
    for (vector<int>& r : rectangle) {
        for (int i = 0; i < 4; i++) {
            r[i] *= 2;
        }
    }
    
    for (vector<int> r : rectangle) {
        for (int i = r[1]; i <= r[3]; i++) {
            for (int j = r[0]; j <= r[2]; j++) {
                a[i][j] = 1;
            }
        }
    }
    
    for (vector<int> r : rectangle) {
        for (int i = r[1] + 1; i < r[3]; i++) {
            for (int j = r[0] + 1; j < r[2]; j++) {
                a[i][j] = 0;
            }
        }
    }
    
    visited[characterY][characterX] = 1;
    q.push({characterY, characterX});
    while(q.size()) {
        tie(y, x) = q.front(); q.pop();
        if (y == itemY && x == itemX) {
            answer = (visited[y][x] - 1) / 2; break;
        }
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= 104 || nx < 0 || nx >= 104) continue;
            if (!a[ny][nx] || visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1; q.push({ny, nx});
        }
    }
    
    return answer;
}