#include <bits/stdc++.h>
using namespace std;
int mx, cur, mx2;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    for (vector<int> size : sizes) {
        mx = max({mx, size[0], size[1]});
    }
    for (vector<int> size : sizes) {
        cur = size[0] < size[1] ? size[0] : size[1];
        mx2 = max(mx2, cur);
    }
    answer = mx * mx2;
    return answer;
}