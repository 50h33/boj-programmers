#include <bits/stdc++.h>
using namespace std;

int go (int s, int e, int idx, vector<int>& array) {
    vector<int> tmp;
    for (int i = s-1; i < e; i++) {
        tmp.push_back(array[i]);
    }
    sort(tmp.begin(), tmp.end());
    return tmp[idx-1];
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (vector<int> v : commands) {
        answer.push_back(go(v[0], v[1], v[2], array));
    }
    return answer;
}