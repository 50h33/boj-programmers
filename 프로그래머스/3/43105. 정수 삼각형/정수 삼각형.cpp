#include <bits/stdc++.h>
using namespace std;
int dp[504][504];

int solution(vector<vector<int>> triangle) {
    int answer = 0, n = triangle.size();
    dp[0][0] = triangle[0][0];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + triangle[i+1][j+1]);
            dp[i+1][j] = max(dp[i+1][j], dp[i][j] + triangle[i+1][j]);
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, dp[n-1][i]);
    }
    answer = mx;
    return answer;
}