#include <bits/stdc++.h>
using namespace std;
int dp[104][104]; bool water[104][104];
int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    dp[1][1] = 1;
    for (int i = 0; i < puddles.size(); i++) {
        int a = puddles[i][0];
        int b = puddles[i][1];
        water[a][b] = true;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 && j == 1) continue;
            if (water[i][j]) continue;
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 1000000007;
        }
    }
    answer = dp[m][n] % 1000000007;
    return answer;
}