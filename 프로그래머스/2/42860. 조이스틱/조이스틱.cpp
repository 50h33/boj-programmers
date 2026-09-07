#include <bits/stdc++.h>

using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.size();
    
    // 상하 조작
    for (char c : name) {
        answer += min(c - 'A', 'Z' - c + 1);
    }
    
    // 좌우 조작
    int mn = n - 1;
    for (int i = 0; i < n; i++) {
        int next = i + 1;
        while (next < n && name[next] == 'A') {
            next++;
        }
        mn = min({i * 2 + (n - next), i + (n - next) * 2, mn});
    }
    answer += mn;
    
    return answer;
}