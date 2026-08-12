#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    sort(dungeons.begin(), dungeons.end());
    int mx = 0;
    do {
        int tmp = k, cnt = 0;
        for (int i = 0; i < dungeons.size(); i++) {
            if (tmp >= dungeons[i][0]) {
                tmp -= dungeons[i][1];
                cnt++;
            }
        }
        mx = max(mx, cnt);
    } while(next_permutation(dungeons.begin(), dungeons.end()));
    answer = mx;
    return answer;
}