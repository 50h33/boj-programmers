#include <bits/stdc++.h>
using namespace std;
int student[34];
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        student[i] = 1;
    }
    for (int idx : lost) {
        student[idx]--;
    }
    for (int idx : reserve) {
        student[idx]++;
    }
    for (int i = 1; i <= n; i++) {
        if (student[i] == 0) {
            if (student[i-1] == 2) {
                student[i] = 1; student[i-1] = 1;
            } else if (student[i+1] == 2) {
                student[i] = 1; student[i+1] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (student[i] >= 1) answer++;
    }
    return answer;
}